// 函数: sub_140fe9610
// 地址: 0x140fe9610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140fe5800(arg1 + 0x43d8, 1)
sub_140fe5800(arg1 + 0x4408, 1)
sub_140fe5800(arg1 + 0x43e8, 1)
sub_140fe5800(arg1 + 0x43f8, 1)
sub_140fe5800(arg1 + 0x4418, 1)
sub_140fe5800(arg1 + 0x4428, 1)
void*** rdi = j_sub_140a82f30(0x50)

if (rdi == 0)
    rdi = nullptr
else
    rdi[1].d = 0xffffffff
    *(rdi + 0xc) = 4
    rdi[3].d = 0
    rdi[2] = &data_142ef5bd8
    *rdi = &data_142ef5b98
    rdi[4] = arg1
    rdi[5].d = 0x1000
    rdi[6] = 0
    rdi[7] = 0
    sub_14198bc10(rdi)
    *rdi = &data_142ef67f0
    rdi[2] = &data_142ef6830
    rdi[8] = 0
    rdi[9].d = 0
    *(rdi + 0x4c) = 5
    rdi[3].d += 1

int64_t rbp = sx.q(*(arg1 + 0x43e0))
int32_t rax_1 = (rbp + 1).d
*(arg1 + 0x43e0) = rax_1

if (rax_1 s> *(arg1 + 0x43e4))
    sub_1405a4d70(arg1 + 0x43d8)

*(*(arg1 + 0x43d8) + (rbp << 3)) = rdi
void*** rax_3 = j_sub_140a82f30(0x50)
void*** rdi_1 = rax_3

if (rax_3 == 0)
    rdi_1 = nullptr
else
    rax_3[1].d = 0xffffffff
    *(rax_3 + 0xc) = 4
    rax_3[3].d = 0
    *rdi_1 = &data_142ef5b98
    rdi_1[2] = &data_142ef5bd8
    rdi_1[4] = arg1
    rdi_1[5].d = 0x1000
    rdi_1[6] = 0
    rdi_1[7] = 0
    sub_14198bc10(rdi_1)
    rdi_1[8] = 0
    *rdi_1 = &data_142ef67f0
    rdi_1[2] = &data_142ef6830
    rdi_1[9].d = 0
    *(rdi_1 + 0x4c) = 5
    rdi_1[3].d += 1

int64_t rbp_1 = sx.q(*(arg1 + 0x4410))
int32_t rax_4 = (rbp_1 + 1).d
*(arg1 + 0x4410) = rax_4

if (rax_4 s> *(arg1 + 0x4414))
    sub_1405a4d70(arg1 + 0x4408)

*(*(arg1 + 0x4408) + (rbp_1 << 3)) = rdi_1
int64_t* rax_6 = j_sub_140a82f30(0x50)
void*** rdi_2 = rax_6

if (rax_6 == 0)
    rdi_2 = nullptr
else
    rax_6[1].d = 0xffffffff
    *(rax_6 + 0xc) = 4
    rax_6[3].d = 0
    *rax_6 = &data_142ef5b98
    rax_6[2] = &data_142ef5bd8
    rax_6[4] = arg1
    rax_6[5].d = 0x1000
    rax_6[6] = 0
    rax_6[7] = 0
    sub_14198bc10(rax_6)
    rdi_2[8] = 0
    *rdi_2 = &data_142ef67f0
    rdi_2[2] = &data_142ef6830
    rdi_2[9].d = 0
    *(rdi_2 + 0x4c) = 1
    rdi_2[3].d += 1

int64_t rbp_2 = sx.q(*(arg1 + 0x43f0))
int32_t rax_7 = (rbp_2 + 1).d
*(arg1 + 0x43f0) = rax_7

if (rax_7 s> *(arg1 + 0x43f4))
    sub_1405a4d70(arg1 + 0x43e8)

*(*(arg1 + 0x43e8) + (rbp_2 << 3)) = rdi_2
void*** rax_9 = j_sub_140a82f30(0x50)
int64_t* rdi_3 = rax_9

if (rax_9 == 0)
    rdi_3 = nullptr
else
    rax_9[1].d = 0xffffffff
    *(rax_9 + 0xc) = 4
    rax_9[3].d = 0
    *rax_9 = &data_142ef5b98
    rdi_3[2] = &data_142ef5bd8
    rdi_3[4] = arg1
    rdi_3[5].d = 0x1000
    rdi_3[6] = 0
    rdi_3[7] = 0
    sub_14198bc10(rdi_3)
    rdi_3[8] = 0
    *rdi_3 = &data_142ef67f0
    rdi_3[2] = &data_142ef6830
    rdi_3[9].d = 0
    *(rdi_3 + 0x4c) = 1
    rdi_3[3].d += 1

int64_t rbp_3 = sx.q(*(arg1 + 0x4400))
int32_t rax_10 = (rbp_3 + 1).d
*(arg1 + 0x4400) = rax_10

if (rax_10 s> *(arg1 + 0x4404))
    sub_1405a4d70(arg1 + 0x43f8)

*(*(arg1 + 0x43f8) + (rbp_3 << 3)) = rdi_3
int64_t* rax_12 = j_sub_140a82f30(0x50)
void*** rdi_4 = rax_12

if (rax_12 == 0)
    rdi_4 = nullptr
else
    rax_12[1].d = 0xffffffff
    *(rax_12 + 0xc) = 4
    rax_12[3].d = 0
    *rax_12 = &data_142ef5b98
    rax_12[2] = &data_142ef5bd8
    rax_12[4] = arg1
    rax_12[5].d = 0x1000
    rax_12[6] = 0
    rax_12[7] = 0
    sub_14198bc10(rax_12)
    rdi_4[8] = 0
    *rdi_4 = &data_142ef67f0
    rdi_4[2] = &data_142ef6830
    rdi_4[9].d = 0
    *(rdi_4 + 0x4c) = 1
    rdi_4[3].d += 1

int64_t rbp_4 = sx.q(*(arg1 + 0x4420))
int32_t rax_13 = (rbp_4 + 1).d
*(arg1 + 0x4420) = rax_13

if (rax_13 s> *(arg1 + 0x4424))
    sub_1405a4d70(arg1 + 0x4418)

*(*(arg1 + 0x4418) + (rbp_4 << 3)) = rdi_4
int64_t* rax_15 = j_sub_140a82f30(0x50)
void*** rdi_5 = rax_15

if (rax_15 == 0)
    rdi_5 = nullptr
else
    rax_15[1].d = 0xffffffff
    *(rax_15 + 0xc) = 4
    rax_15[3].d = 0
    *rax_15 = &data_142ef5b98
    rax_15[2] = &data_142ef5bd8
    rax_15[4] = arg1
    rax_15[5].d = 0x1000
    rax_15[6] = 0
    rax_15[7] = 0
    sub_14198bc10(rax_15)
    rdi_5[8] = 0
    *rdi_5 = &data_142ef67f0
    rdi_5[2] = &data_142ef6830
    rdi_5[9].d = 0
    *(rdi_5 + 0x4c) = 1
    rdi_5[3].d += 1

int64_t rbx = sx.q(*(arg1 + 0x4430))
int32_t rax_16 = (rbx + 1).d
*(arg1 + 0x4430) = rax_16

if (rax_16 s> *(arg1 + 0x4434))
    sub_1405a4d70(arg1 + 0x4428)

int64_t result = *(arg1 + 0x4428)
*(result + (rbx << 3)) = rdi_5
return result
