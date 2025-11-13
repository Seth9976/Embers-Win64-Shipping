// 函数: sub_142137890
// 地址: 0x142137890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
int64_t var_18 = rsi
arg1[1].b = 0
__builtin_memset(&arg1[2], 0, 0x20)
*arg1 = &data_1432dbcc8
arg1[7] = 0
arg1[8] = 0
arg1[9] = 0
sub_1419ead80(&arg1[0xa], arg2 + 0x58)
void* rax = sub_141f16160(arg2)

if (rax != 0)
    arg1[2] = *rax
    arg1[3] = *(rax + 8)
    arg1[4] = *(rax + 0x30)
    
    if (&arg1[8] != rax + 0x10)
        rsi = sx.q(*(rax + 0x18))
        int64_t r12_1 = *(rax + 0x10)
        int32_t r8 = *(arg1 + 0x4c)
        arg1[9].d = rsi.d
        
        if (rsi.d != 0 || r8 != 0)
            sub_1405a4be0(&arg1[8], rsi.d, r8)
            memcpy(arg1[8], r12_1, (rsi << 4).d)
        else
            *(arg1 + 0x4c) = 0

if (arg1[2] != 0 || arg1[3] != 0)
    rsi.b = 1
else
    rsi.b = 0

arg1[6] = *(arg2 + 0x10)
int32_t rbx_1 = *(sub_141ee6400(*(arg2 + 8)) + 8)
int32_t arg_8 = rbx_1
int64_t rax_5 = (*(*arg3 + 0x40))(arg3)

if (sub_1423b4730(arg1[6], rax_5, rbx_1) == 0)
    int64_t* rcx_10 = arg1[6]
    
    if (rcx_10 == 0)
        arg1[6] = sub_14210f630(0)
    else if (rsi.b != 0 && (*(*rcx_10 + 0x2d0))(rcx_10, 4) == 0)
        arg1[6] = sub_14210f630(0)
else
    arg1[6] = 0
    arg1[6] = sub_14210f630(0)

if (sub_1419d5c70(data_143f0f1a0) != 0)
    int64_t* var_60_1 = arg3
    
    if (sub_140a80f40() == 0)
        uint32_t rax_13
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_13.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_13.b == 0))
            void var_50
            int64_t* rax_15 = sub_142140380(&var_50, nullptr, 0xff)
            void* rcx_19 = *rax_15
            *(rcx_19 + 0x10) = (&arg1[7]).o
            *(rcx_19 + 0x20) = arg4.q
            void* rcx_20 = *rax_15
            int64_t* rsi_1 = *(rcx_20 + 0x30)
            
            if (rsi_1 != 0)
                rsi_1[9].d += 1
            
            sub_14119c2b0(rcx_20, rax_15[1], rax_15[2].d, 1)
            
            if (rsi_1 != 0)
                rsi_1[9].d -= 1
                
                if (rsi_1[9].d == 1)
                    sub_140a2f6e0(rsi_1)
        else
            void arg_18
            sub_1405d1600(&arg1[7], sub_1420f74a0(&arg_18, arg3, arg4, nullptr, 0, 0))
            sub_1405d1550(&arg_18)
    else
        void arg_10
        sub_1405d1600(&arg1[7], sub_1420f74a0(&arg_10, arg3, arg4, nullptr, 0, 0))
        sub_1405d1550(&arg_10)

return arg1
