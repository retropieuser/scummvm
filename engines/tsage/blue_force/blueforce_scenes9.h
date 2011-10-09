/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#ifndef TSAGE_BLUEFORCE_SCENES9_H
#define TSAGE_BLUEFORCE_SCENES9_H

#include "common/scummsys.h"
#include "tsage/blue_force/blueforce_logic.h"
#include "tsage/blue_force/blueforce_speakers.h"
#include "tsage/converse.h"
#include "tsage/events.h"
#include "tsage/core.h"
#include "tsage/scenes.h"
#include "tsage/globals.h"
#include "tsage/sound.h"

namespace TsAGE {

namespace BlueForce {

using namespace TsAGE;

class Scene900: public PalettedScene {
	/* Items */
	class Item1: public NamedHotspot {
	public:
		bool startAction(CursorType action, Event &event);
	};
	class Item4: public NamedHotspot {
	public:
		bool startAction(CursorType action, Event &event);
	};
	/* Objects */
	class Object1: public NamedObject {
	public:
		bool startAction(CursorType action, Event &event);
	};
	class Object2: public NamedObjectExt {
	public:
		bool startAction(CursorType action, Event &event);
	};
	class Object3: public NamedObjectExt {
	public:
		bool startAction(CursorType action, Event &event);
	};
	class Object6: public NamedObject {
	public:
		bool startAction(CursorType action, Event &event);
	};
	class Object7: public NamedObject {
	public:
		bool startAction(CursorType action, Event &event);
	};

	/* Actions */
	class Action1 : public Action {
	public:
		void signal();
	};
	class Action2 : public Action {
	public:
		void signal();
	};
	class Action3 : public Action {
	public:
		void signal();
	};
	class Action4 : public Action {
	public:
		void signal();
	};

public:
	SequenceManager _sequenceManager1, _sequenceManager2;
	SpeakerGameText _gameTextSpeaker;
	SpeakerJakeJacket _jakeJacketSpeaker;
	SpeakerLyleHat _lyleHatSpeaker;
	Item1 _item1;
	Object1 _object1;
	Object2 _object2;
	Object3 _object3;
	NamedHotspot _item2;
	NamedHotspot _item3;
	NamedObject _object4;
	NamedObject _object5;
	Object6 _lyle;
	Object7 _object7;
	Item4 _item4;
	ASoundExt _sound1;
	Action1 _action1;
	Action2 _action2;
	Action3 _action3;
	Action4 _action4;
	int _field1974;
	int _field1976;

	Scene900();
	void postInit(SceneObjectList *OwnerList = NULL);
	void signal();
	void process(Event &event);
	void dispatch();
	void synchronize(Serializer &s);
};

class Scene910: public PalettedScene {
	/* Actions */
	class Action1 : public Action {
	public:
		void signal();
	};
	class Action2 : public Action {
	public:
		void signal();
	};
	/* Objects */
	class Object1: public NamedObject {
	public:
		int _field90;
		bool startAction(CursorType action, Event &event);
	};
	class Object2: public NamedObject {
	public:
		bool startAction(CursorType action, Event &event);
	};
	class Object3: public NamedObject {
	public:
		bool startAction(CursorType action, Event &event);
	};
	class Object4: public NamedObject {
	public:
		bool startAction(CursorType action, Event &event);
	};
	class Object8: public NamedObject {
	public:
		int _field90, _field92;
		bool startAction(CursorType action, Event &event);
		void init(int val);

	};
	class Object10: public NamedObject {
	public:
		bool startAction(CursorType action, Event &event);
	};
	class Object11: public NamedObject {
	public:
		bool startAction(CursorType action, Event &event);
	};

	class Object13: public NamedObject {
	protected:
		int _field90, _field92;
	public:
		void subEBB05(int x, int y, int arg8, int8 argA);
		virtual bool startAction(CursorType action, Event &event);
		virtual void remove();
	};

	class Object28: public Object13 {
	public:
		void subEBD26(int x, int y, int arg8, int8 argA);
		bool startAction(CursorType action, Event &event);
		void remove();
	};

	class Object25: public NamedObject {
		int _field90, _field92;
	public:
		void subEBBDC(int x, int y, int arg8, int argA);
		bool startAction(CursorType action, Event &event);
		void remove();
	};

	class Object12: public FocusObject {
		Object13 _object13, _object14, _object15, _object16, _object17, _object18;
		Object13 _object19, _object20, _object21, _object22, _object23, _object24;
		Object25 _object25, _object26;
	public:
		Object13 _object27;
		Object28 _object28;
		Common::String getClassName() { return "Scene910_object12"; }
		void postInit(SceneObjectList *OwnerList = NULL);
		void remove();
	};

	class Object31: public NamedObject {
	public:
		NamedObject _object32;
		void remove();
		bool startAction(CursorType action, Event &event);
		void subED6EA(int frame);
	};

	class Object29: public FocusObject {
		Object28 _object30;
		Object31 _object31;
	public:
		Common::String getClassName() { return "Scene910_object29"; }
		void postInit(SceneObjectList *OwnerList = NULL);
		void remove();
	};

	/* Items */
	class Item1: public NamedHotspot {
	public:
		bool startAction(CursorType action, Event &event);
	};
	class Item2: public NamedHotspot {
	public:
		bool startAction(CursorType action, Event &event);
	};
	class Item3: public NamedHotspot {
	public:
		bool startAction(CursorType action, Event &event);
	};
	class Item9: public NamedHotspot {
	public:
		bool startAction(CursorType action, Event &event);
	};
	class Item15: public NamedHotspot {
	public:
		bool startAction(CursorType action, Event &event);
	};
	class Item16: public NamedHotspot {
	public:
		bool startAction(CursorType action, Event &event);
	};
	class Item17: public NamedHotspot {
	public:
		bool startAction(CursorType action, Event &event);
	};

	int _field2DDA, _field2DDC, _field2DDE, _field2DD8, _field2DE0, _field2DE2, _field2DE4;
public:
	SequenceManager _sequenceManager1, _sequenceManager2;
	SpeakerGameText _gameTextSpeaker;
	SpeakerJakeJacket _jakeJacketSpeaker;
	SpeakerLyleHat _lyleHatSpeaker;
	SpeakerFBI _fbiSpeaker;
	SpeakerNico _nicoSpeaker;
	SpeakerDA _daSpeaker;
	Action1 _action1;
	Action2 _action2;
	Timer _timer1;
	Object1 _object1;
	Object2 _object2;
	Object3 _object3;
	Object4 _object4;
	NamedObject _object5,  _object6, _object7;
	Object8 _object8,  _object9;
	Object10 _object10;
	Object11 _object11;
	Object12 _object12;
	FocusObject _object29;
	NamedObject _object30, _object31, _object32;
	Item1 _item1;
	Item2 _item2;
	Item3 _item3;
	NamedHotspot _item4,  _item5,  _item6,  _item7,  _item8;
	Item9 _item9, _item10;
	NamedHotspot _item11, _item12, _item13, _item14;
	Item15 _item15;
	Item16 _item16;
	Item17 _item17;
	ASoundExt _sound1, _sound2;

	void postInit(SceneObjectList *OwnerList = NULL);
	void remove();
	void signal();
	void process(Event &event);
	void dispatch();
	void checkGun();
	void subE82BD();
	void subE83E1();
};

class Scene920: public SceneExt {
	/* Items */
	class Item1: public NamedHotspot {
	public:
		bool startAction(CursorType action, Event &event);
	};
	class Item8: public NamedHotspot {
	public:
		bool startAction(CursorType action, Event &event);
	};

public:
	SequenceManager _sequenceManager1;
	SpeakerGameText _gameTextSpeaker;
	SpeakerJakeJacket _jakeJacketSpeaker;

	Item1 _crate;
	NamedHotspot _item2;
	NamedHotspot _item3;
	NamedHotspot _item4;
	NamedHotspot _item5;
	NamedHotspot _item6;
	NamedHotspot _item7;
	NamedObject _object1;
	NamedObject _object2;
	NamedObject _object3;
	Item8 _exitN;
	Common::Point _oldCoord;

	void postInit(SceneObjectList *OwnerList = NULL);
	void signal();
	void process(Event &event);
	void dispatch();
	void synchronize(Serializer &s);
};

class Scene930: public PalettedScene {
	/* Objects */
	class Object1: public NamedObject {
	public:
		bool startAction(CursorType action, Event &event);
	};
	class Object2: public FocusObject {
	public:
		bool startAction(CursorType action, Event &event);
	};
	class Object3: public NamedObject {
	public:
		bool startAction(CursorType action, Event &event);
	};
	class Object4: public FocusObject {
	public:
		bool startAction(CursorType action, Event &event);
	};
	class Object5: public FocusObject {
	public:
		bool startAction(CursorType action, Event &event);
	};
	/* Items */
	class Item1: public NamedHotspot {
	public:
		bool startAction(CursorType action, Event &event);
	};
	/* Actions */
	class Action1 : public Action {
	public:
		void signal();
	};
	class Action2 : public Action {
	public:
		void signal();
	};
	class Action3 : public Action {
	public:
		void signal();
	};

	void showBootWindow();
	void subF3C07();
	void subF3D6F();
public:
	SequenceManager _sequenceManager1;
	Object1 _box;
	Object2 _object2;
	Object3 _boots;
	Object4 _bootsWindow;
	Object5 _object5;
	
	Item1 _item1;
	NamedHotspot _item2;
	NamedHotspot _item3;
	NamedHotspot _item4;
	NamedHotspot _item5;
	NamedHotspot _item6;
	NamedHotspot _item7;
	NamedHotspot _item8;
	NamedHotspot _item9;
	NamedHotspot _item10;
	NamedHotspot _item11;
	NamedHotspot _item12;
	NamedHotspot _item13;
	NamedHotspot _item14;
	NamedHotspot _item15;
	NamedHotspot _item16;
	NamedHotspot _item17;
	NamedHotspot _item18;
	NamedHotspot _item19;
	NamedHotspot _item20;
	NamedHotspot _item21;

	Action1 _action1;
	Action2 _action2;
	Action3 _action3;

	SpeakerGameText gameTextSpeaker;

	int _v141A;
	int _v141C;

	void postInit(SceneObjectList *OwnerList = NULL);
	void signal();
	void dispatch();
	void synchronize(Serializer &s);
};

class Scene935: public PalettedScene {
	/* Actions */
	class Action1 : public Action {
	public:
		void signal();
	};

public:
	SequenceManager _sequenceManager;
	NamedObject _object1;
	NamedObject _object2;
	NamedObject _object3;
	Action1 _action1;
	VisualSpeaker _visualSpeaker;

	void postInit(SceneObjectList *OwnerList = NULL);
	void remove();
	void signal();
	void dispatch();
};

class Scene940: public SceneExt {
	/* Items */
	class Item1: public NamedHotspot {
	public:
		bool startAction(CursorType action, Event &event);
	};
	/* Actions */
	class Action1 : public Action {
	public:
		void signal();
	};

public:
	SequenceManager _sequenceManager1;
	SequenceManager _sequenceManager2;
	SequenceManager _sequenceManager3;
	SequenceManager _sequenceManager4;
	NamedObject _object1;
	NamedObject _object2;
	NamedObject _object3;
	NamedObject _object4;
	NamedObject _object5;
	NamedObject _object6;
	NamedObject _object7;
	NamedObject _object8;
	NamedObject _object9;
	NamedObject _object10;
	NamedObject _object11;
	NamedObject _object12;
	NamedObject _object13;
	NamedObject _object14;
	NamedObject _object15;
	NamedObject _object16;
	NamedObject _object17;
	NamedObject _object18;
	Item1 _item1;
	Action1 _action1;

	SpeakerGameText _gameTextSpeaker1;
	SpeakerGameText _gameTextSpeaker2;

	void postInit(SceneObjectList *OwnerList = NULL);
	void remove();
};

} // End of namespace BlueForce
} // End of namespace TsAGE

#endif
