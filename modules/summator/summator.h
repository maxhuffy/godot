/* summator.h */

#ifndef SUMMATOR_H
#define SUMMATOR_H

#include "core/object/ref_counted.h"
#include "Eigen/Dense"

class Summator : public RefCounted {
	GDCLASS(Summator, RefCounted);

	int count;
	Eigen::MatrixXi m = Eigen::MatrixXi::Random(3, 4);

protected:
	static void _bind_methods();

public:
	void add(int p_value);
	void reset();
	int get_total() const;

	Summator();
};

#endif // SUMMATOR_H
