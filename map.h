#pragma once

#include <vector>

class Map
{
public:
	Map();
	virtual ~Map();

	// �O���t�B�b�N�f�[�^�̃��[�h�A�A�����[�h
	void load();
	void unload();

	// 
	void update();

	// �`��
	void draw();

private:
	// �}�b�v�`�b�v�ҏW�p�J�[�\���̕\��
	

	// �}�b�v�`�b�v�̐����擾����
	int chipNumX();
	int chipNumY();
	int chipNum();

	// �}�b�v�f�[�^�̓��o��
	void outputDate(); // �}�b�v�̃f�[�^���o�͂���
	void inputDate();  // �}�b�v�̃f�[�^��ǂݍ���

private:
	// �O���t�B�b�N�f�[�^�̃n���h��
	int m_handle;

	// �O���t�B�b�N�̃f�[�^
	int m_graphWidth;
	int m_graphHeight;

	// �}�b�v�`�b�v�ҏW�p�f�[�^
	int m_cursorNo;
	std::vector<int> m_mapDate;

	// �X�N���[������
	int m_scrollX;
	int m_scrollY;
};