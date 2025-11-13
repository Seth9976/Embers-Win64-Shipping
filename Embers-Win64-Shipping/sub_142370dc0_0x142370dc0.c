// 函数: sub_142370dc0
// 地址: 0x142370dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
void* rbx = data_143f5b298

if (rbx == 0 || *(rbx + 0x210) == 0)
label_142370e36:
    int64_t* rax_4 = sub_140a84c80(0, 0x30, 0)
    
    if (rax_4 != 0)
        *rax_4 = &data_142d57800
        sub_140d3a3a0(&rax_4[1], arg1)
        rax_4[2] = sub_14236cb30
        rax_4[4] = sub_140a387b0()
        *rax_4 = &data_142d57858
    
    int64_t rbx_1 = 0
    
    if (rax_4 != 0)
        sub_140599630(&data_14399fca0, 1)
        void arg_8
        int64_t* rax_7 = (*(*rax_4 + 0x30))(rax_4, &arg_8)
        int64_t rbp_1 = sx.q(data_14399fca8)
        rbx_1 = *rax_7
        int32_t rax_8 = (rbp_1 + 1).d
        bool cond:0_1 = rax_8 s<= data_14399fcac
        data_14399fca8 = rax_8
        
        if (not(cond:0_1))
            sub_1405a4f90(&data_14399fca0)
        
        void** rax_11 = (rbp_1 << 4) + data_14399fca0
        *rax_11 = rax_4
        rax_11[1].d = 3
    
    arg1[0xa6] = rbx_1
else
    void* rax_1 = sub_1424bf360()
    
    if (rax_1 == 0)
        goto label_142370e36
    
    void* rdx_1 = *(rbx + 0x210)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30
            || rdx_1 == 0)
        goto label_142370e36
    
    sub_142360710(arg1, 0)

sub_14235ae50(arg1)
void* i = arg1[5]
char rcx_5 = 0

while (i != 0)
    rcx_5 = *(i + 0x55)
    i = *(i + 0xb0)
    
    if (rcx_5 != 0)
        break

int64_t rdx_6

if (rcx_5 == 1)
    int64_t* rcx_6 = arg1[0x2d]
    
    if (rcx_6 != 0)
        rdx_6.b = 1
        i = (*(*rcx_6 + 0x2e0))(rcx_6, rdx_6)
    
    arg1[0xa5].b |= 0x20
    return i

if ((arg1[0x2c].b & 1) != 0 || rcx_5 == 2)
    int64_t* rcx_7 = arg1[0x2d]
    
    if (rcx_7 != 0)
        rdx_6.b = 1
        jump(*(*rcx_7 + 0x2d8))

return i
