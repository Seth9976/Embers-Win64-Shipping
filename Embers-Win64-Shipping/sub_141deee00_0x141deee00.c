// 函数: sub_141deee00
// 地址: 0x141deee00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[0xc])
int32_t arg_8
sub_140865c40(&arg1[2], &arg_8, arg2)
int64_t rax = sx.q(arg_8)
int64_t* rdi

if (rax.d == 0xffffffff)
    rdi.b = 0
else
    rdi = arg1[2] + rax * 0x18
    
    if (rdi == 0)
        rdi.b = 0
    else
        rdi = rdi[1]
        
        if (rdi == 0)
            rdi.b = 0
        else
            sub_140868c90(&arg1[2], arg2)
            
            for (int32_t i = 0; i s< 3; i += 1)
                sub_141de5380(rdi, zx.o(0))
                
                if (sub_141df0730(rdi) == 0)
                    break
            
            int64_t* i_1 = rdi[1]
            
            for (void* rbp_3 = &i_1[sx.q(rdi[2].d) * 4]; i_1 != rbp_3; i_1 = &i_1[4])
                sub_141de8d90(rdi, i_1)
            
            int64_t rcx_6 = rdi[0xc]
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            int64_t rcx_7 = rdi[0xa]
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            int64_t rcx_8 = rdi[8]
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            DeleteCriticalSection(&rdi[3])
            int64_t rcx_10 = rdi[1]
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
            
            j_sub_140a74f90(rdi)
            rdi.b = 1

if (arg1 != -0x60)
    LeaveCriticalSection(&arg1[0xc])

return zx.q(rdi.b)
