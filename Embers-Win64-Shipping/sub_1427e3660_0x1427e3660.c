// 函数: sub_1427e3660
// 地址: 0x1427e3660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t j_1 = 0
arg1[4] = arg5
*arg1 = arg2
void* arg_28
void* rdx = arg_28
arg1[5] = arg6
arg1[1] = arg3
arg1[2] = arg4
arg1[3] = rdx
int64_t* var_468 = *(rdx + 0x10)
void var_460
void* var_258 = &var_460
int32_t var_250 = 0
char var_260 = 1
int32_t var_24c = 0x40
int32_t i_2 = (*(*arg4 + 0xd0))(arg4)
arg_28 = nullptr
sub_1427e6a90(&var_468, i_2, &arg_28)
(*(*arg4 + 0xd8))(arg4, var_258, zx.q(i_2), 0, var_468)

if (i_2 != 0)
    int64_t* r12_1 = nullptr
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        int64_t* r14_1 = *(r12_1 + var_258)
        int32_t var_38_1 = j_1.d
        char var_48_1 = 1
        void var_248
        void* var_40_1 = &var_248
        int32_t var_34_1 = 0x40
        int32_t j_2 = (*(*r14_1 + 0x1c0))(r14_1)
        arg5 = j_1
        sub_1427e6b20(&var_248, j_2, &arg5)
        (*(*r14_1 + 0x1c8))(r14_1, var_40_1, zx.q(j_2), 0)
        
        if (j_2 != 0)
            uint64_t j_3 = j_1
            j_1 = zx.q(j_2)
            uint64_t j
            
            do
                int64_t* rcx_6 = arg1[5]
                uint64_t rdi_2 = *(j_3 + var_40_1)
                arg5 = rdi_2
                int64_t* rax_7 = sub_1427e4150(rcx_6, &arg5, &arg_28)
                
                if (arg_28.b == 0 && rax_7 != 0)
                    *rax_7 = rdi_2
                    rax_7[1] = r14_1
                
                j_3 += 8
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        if ((var_34_1 & 0x7fffffff) != 0 && var_34_1 s>= 0 && var_40_1 != &var_248 && var_40_1 != 0)
            class physx::PxAllocatorCallback* rax_9 = physx::shdfnd::getAllocator()
            int64_t r8_5 = *rax_9
            (*(r8_5 + 0x10))(rax_9, var_40_1, r8_5)
        
        r12_1 = &r12_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

if ((var_24c & 0x7fffffff) != 0 && var_24c s>= 0 && var_258 != &var_460 && var_258 != 0)
    int64_t* rcx_8 = *var_468
    (*(*rcx_8 + 0x10))(rcx_8, var_258)

return arg1
