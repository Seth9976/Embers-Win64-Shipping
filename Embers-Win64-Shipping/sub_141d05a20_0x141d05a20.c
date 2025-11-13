// 函数: sub_141d05a20
// 地址: 0x141d05a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
EnterCriticalSection(arg1 + 0x120)
char* arg_30
*arg_30 = 1
uint64_t r8 = zx.q(*(arg1 + 0x70))
int32_t i_1 = (divs.dp.q(sx.o(arg4), r8)).d
int64_t i = sx.q(i_1)
int32_t i_2 = i_1
int64_t arg_28

for (int64_t r15 = sx.q((divs.dp.q(sx.o(arg_28 - 1 + arg4), r8)).d); i s<= r15; i += 1)
    int64_t rdi_1 = *(arg1 + 0xd0)
    
    if (*(rdi_1 + (i << 3)) == 0)
        void* rax_9 = j_sub_140a82f30(0x38)
        void* const rcx_1 = rax_9
        
        if (rax_9 == 0)
            rcx_1 = nullptr
        else
            __builtin_memset(rax_9, 0, 0x30)
            *(rax_9 + 0x30) = 0xffffffff
            *(rax_9 + 0x34) = 0
            *(rax_9 + 0x36) = 0
        
        *(*(arg1 + 0xd0) + (i << 3)) = rcx_1
        *(*(*(arg1 + 0xd0) + (i << 3)) + 0x30) = i_2
        rdi_1 = *(arg1 + 0xd0)
    
    int64_t* rdi_2 = *(rdi_1 + (i << 3))
    int32_t temp2_1 = *(rdi_2 + 0x2c)
    *(rdi_2 + 0x2c) -= 1
    
    if (temp2_1 == 1)
        if (*(rdi_2 + 0x34) == 0 || *(rdi_2 + 0x35) != 0)
            *rdi_2 = 0
            int64_t* rcx_6 = rdi_2[3]
            rdi_2[3] = 0
            
            if (rcx_6 != 0)
                rcx_6[9].d -= 1
                
                if (rcx_6[9].d == 1)
                    sub_140a2f6e0(rcx_6)
            
            int64_t rcx_7 = rdi_2[1]
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
                rdi_2[1] = 0
            
            int64_t rcx_8 = rdi_2[2]
            rdi_2[4].d = 0
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
                rdi_2[2] = 0
            
            rdi_2[5].d = 0
            *(rdi_2 + 0x34) = 0
        else
            int64_t* arg_10 = rdi_2
            sub_140946410(arg2, &arg_30, &arg_10, nullptr)
            int64_t rax_12 = *(arg1 + 0xd0)
            int64_t* arg_20 = rdi_2
            *(rax_12 + (i << 3)) = 0
            void** var_58 = &arg_20
            int64_t* var_50_1 = &arg_18
            sub_1417fdda0(arg1 + 0x170, &arg_28, &var_58, nullptr)
            *(rdi_2 + 0x36) = 1
            int64_t* rcx_5 = *rdi_2
            
            if (*(rcx_5 + 0x63) == 0)
                *(rcx_5 + 0x63) = 1
                rcx_5[0xc].b = 1
                
                if (*(rcx_5 + 0x61) == 0)
                    (*(*rcx_5 + 0x10))(rcx_5)
    
    i_2 += 1

int32_t result = arg2[1].d

if (result == *(arg2 + 0x34))
    result = sub_1409740e0(arg1 + 0x80, arg_18)

if (arg1 == -0x120)
    return result

return LeaveCriticalSection(arg1 + 0x120)
