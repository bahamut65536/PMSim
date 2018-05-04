

#ifndef SRC_POKEMON_INCLUDE_POKEMON_H_
#define SRC_POKEMON_INCLUDE_POKEMON_H_

#include <string>
#include <vector>

namespace pokemon
{

enum ELEMENT_TYPE
{
  null,
  normal,
  fight,
  flying,
  poison,
  ground,
  rock,
  bug,
  ghost,
  steel,
  fire,
  water,
  grass,
  electric,
  psychic,
  ice,
  dragon,
  dark,
  fairy
};

// 招式类型
enum MOVE_TYPE
{
  physical,
  special,
  status
};

// 性格
enum NATURE_TYPE
{
  Hardy,
  Lonely,
  Brave,
  Adamant,
  Naughty,
  Bold,
  Relaxed,
  Impish,
  Lax,
  Timid,
  Hasty,
  Jolly,
  Naive,
  Modest,
  Mild,
  Quiet,
  Rash,
  Calm,
  Gentle,
  Sassy,
  Careful
};

class move
{
public:
  move();

  virtual void run();

private:
  unsigned int id_;
  std::string name_;
  ELEMENT_TYPE element_type_;
  // 优先度
  int priority_;
  MOVE_TYPE type_;
  int power_;
  int accuracy_;
};

class skill
{
public:
  skill();

  virtual void run();

private:
  unsigned int id_;
  std::string name_;
};

class item
{
public:
  item();

  virtual void check();

private:
  unsigned int id_;
  std::string name_;
};

typedef std::vector<unsigned int> id_vec;

class pokemon_type
{
public:
  pokemon_type();
  virtual void GetAllUseableMove(id_vec &move_id_list);
  virtual void GetAllUseableSkill(id_vec &skill_id_list);

protected:
  std::string name_;
  ELEMENT_TYPE type1_;
  ELEMENT_TYPE type2_;
  // 特性

  // 种族值
  unsigned int hp_;
  unsigned int atk_;
  unsigned int def_;
  unsigned int spa_;
  unsigned int spd_;
  unsigned int spe_;
  // 蛋组

  // 身高
  unsigned int height_;
  // 体重
  unsigned int weight_;

  unsigned int pokemon_id_;
  unsigned int pokemon_subid_;
};

class pokemon : public pokemon_type
{
public:
  pokemon();

protected:
  std::string nikname_;
  unsigned int level;
  NATURE_TYPE nature_;
  // 个体值Individual
  unsigned int individual_hp_;
  unsigned int individual_atk_;
  unsigned int individual_def_;
  unsigned int individual_spa_;
  unsigned int individual_spd_;
  unsigned int individual_spe_;
  // 努力值Base stats
  unsigned int bs_hp_;
  unsigned int bs_atk_;
  unsigned int bs_def_;
  unsigned int bs_spa_;
  unsigned int bs_spd_;
  unsigned int bs_spe_;

  // move
  std::vector<move> move_vec_;
  // 特性
  skill skill_;
  // 道具
  item item_;
};
}
#endif // SRC_POKEMON_INCLUDE_POKEMON_H_
