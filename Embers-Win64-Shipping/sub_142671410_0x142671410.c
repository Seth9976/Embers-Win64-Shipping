// 函数: sub_142671410
// 地址: 0x142671410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = 0
*arg1 = &data_142d44d70

if (data_143de5432 == 0)
    void* rcx = data_143e1a338
    
    if (rcx == 0)
        void* rax_1 = sub_140cde0b0()
        sub_140d19010(rax_1, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
        int64_t arg_10 = 0
        void* rax_3 = sub_140d2dfc0(sub_140baa6d0(), rax_1, 0, 0, 0, 0, 0, 0, 0)
        data_143e1a338 = rax_3
        int32_t rax_4 = *(rax_3 + 0xc)
        void* const rax_11
        
        if (rax_4 s>= data_143e1d9b4)
            rax_11 = nullptr
        else
            int16_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(rax_4)
            uint32_t rdx_2 = zx.d(temp1_1)
            int32_t rax_6 = temp2_1 + rdx_2
            rax_11 =
                *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3)) + sx.q(zx.d(rax_6.w) - rdx_2) * 0x18
        
        *(rax_11 + 8) |= 0x40000000
        rcx = data_143e1a338
    
    sub_140b9aa70(rcx, arg1)
    arg1[1].b = 1

void* rcx_7 = &arg1[0x15]
*arg1 = &data_1434597b0
arg1[6] = 0
arg1[7] = 0
arg1[8] = arg2 + 0x970
__builtin_memset(&arg1[9], 0, 0x18)
*(rcx_7 + 0x10) = 0
*(rcx_7 + 0x18) = 0
*(rcx_7 + 0x1c) = 0x80
void* rax_13 = *(rcx_7 + 0x10)

if (rax_13 != 0)
    rcx_7 = rax_13

*rcx_7 = 0
*(rcx_7 + 8) = 0
memset(&arg1[0x19], 0, 0x88)
int32_t rax_14 = *(arg1 + 0x12c)
void* rcx_9 = &arg1[0x4e]
arg1[0x27].d = 0xa
*(arg1 + 0x14c) = 0
*(arg1 + 0x12c) = (rax_14 & 0xffffffc7) | 7
*(arg1 + 0x13c) = 0xffffffff
arg1[0x2a] = 0
arg1[0x2b] = 0
arg1[0x4c] = 0
arg1[0x4d] = 0
*(rcx_9 + 0x10) = 0
*(rcx_9 + 0x18) = 0
*(rcx_9 + 0x1c) = 0x80
void* rax_17 = *(rcx_9 + 0x10)

if (rax_17 != 0)
    rcx_9 = rax_17

*rcx_9 = 0
*(rcx_9 + 8) = 0
arg1[0x52].d = 0xffffffff
*(arg1 + 0x294) = 0
arg1[0x54] = 0
arg1[0x55].d = 0
__builtin_memset(&arg1[0x58], 0, 0x90)
sub_141dde490(&arg1[0x6a], 0x420c0000, 0x43100000)
*(arg1 + 0x14) = (*(arg1 + 0x14) & 0xfffffff7) | 4
arg1[0xc].d = *arg3
*(arg1 + 0x64) = arg3[1]
*(arg1 + 0xc8) = *(arg2 + 0x18)
*(arg1 + 0xd8) = *(arg2 + 0x28)
*(arg1 + 0xe8) = *(arg2 + 0x38)
*(arg1 + 0xf8) = *(arg2 + 0x48)
*(arg1 + 0x108) = *(arg2 + 0x58)
*(arg1 + 0x118) = *(arg2 + 0x68)
*(arg1 + 0x128) = *(arg2 + 0x78)
*(arg1 + 0x138) = *(arg2 + 0x88)
arg1[0x29] = *(arg2 + 0x98)
arg1[0xd].d = *(arg2 + 0x290)
sub_1426725b0(&arg1[0x2c], arg2 + 0x120)
int64_t* rbx_3 = *(arg2 + 0x10)
int64_t rdx_6 = 0

if (rbx_3 != 0)
    int32_t rax_24 = 0
    bool z_1
    
    if (0 == rbx_3[1].d)
        rbx_3[1].d = 0
        z_1 = true
    else
        rax_24 = rbx_3[1].d
        z_1 = false
    
    if (z_1)
    label_142671734:
        rbx_3 = nullptr
    else
        while (true)
            bool z_2
            
            if (rax_24 == rbx_3[1].d)
                rbx_3[1].d = rax_24 + 1
                z_2 = true
            else
                rbx_3[1].d
                z_2 = false
            
            if (z_2)
                if (rbx_3 != 0)
                    rdx_6 = *(arg2 + 8)
                
                break
            
            rax_24 = 0
            bool z_3
            
            if (0 == rbx_3[1].d)
                rbx_3[1].d = 0
                z_3 = true
            else
                rax_24 = rbx_3[1].d
                z_3 = false
            
            if (z_3)
                goto label_142671734

arg1[0x64] = rdx_6
int64_t* rcx_13 = arg1[0x65]

if (rbx_3 != rcx_13)
    if (rbx_3 != 0)
        *(rbx_3 + 0xc) += 1
        rcx_13 = arg1[0x65]
    
    if (rcx_13 != 0)
        int32_t rax_26 = *(rcx_13 + 0xc)
        *(rcx_13 + 0xc) -= 1
        
        if (rax_26 == 1)
            (*(*rcx_13 + 8))(rcx_13, 1)
    
    arg1[0x65] = rbx_3

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t rsi_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, zx.q(rsi_1))

arg1[3].d = 0x1010000
*(arg1 + 0x1c) = 1
arg1[4].d = 0
*(arg1 + 0x24) = 1
arg1[5] = 0
return arg1
