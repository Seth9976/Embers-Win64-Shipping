// 函数: sub_140a2c9c0
// 地址: 0x140a2c9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1
int32_t rbx = arg4
int64_t* rsi = arg3
sub_140a30c70(arg2, 0)
int32_t rax = rdi[1].d
int32_t r13 = 0
int64_t rdx = *rdi
int64_t var_60 = rdx
int32_t r9 = rax - 1

if (rax == 0)
    r9 = 0

if (rdx == 0)
    return zx.q(arg2[1].d)

int32_t rbp = 0
int32_t r14 = 0
int64_t r15 = -1
int32_t arg_10 = 0

while (true)
label_140a2ca40:
    int32_t rax_1 = rdi[1].d
    int32_t rcx_1 = rax_1 - 1
    
    if (rax_1 == 0)
        rcx_1 = 0
    
    if (r14 s>= rcx_1)
        break
    
    int32_t rdi_1 = 0
    
    if (rbx s> 0)
        wchar16* _String1 = rdx + (sx.q(r14) << 1)
        wchar16* _String1_1 = _String1
        int64_t rbx_1
        
        while (true)
            wchar16* _String2 = *rsi
            rbx_1 = -1
            
            do
                rbx_1 += 1
            while (_String2[rbx_1] != 0)
            
            if (wcsncmp(_String1, _String2, sx.q(rbx_1.d)) == 0)
                break
            
            rbx = arg4
            rdi_1 += 1
            _String1 = _String1_1
            rsi = &rsi[1]
            
            if (rdi_1 s>= rbx)
                rsi = arg3
                r14 += 1
                rdx = var_60
                rdi = arg1
                goto label_140a2ca40
        
        if (r14 == 0xffffffff)
            rbx = arg4
            rsi = arg3
            rdx = var_60
        else
            if (arg5 == 0 || r14 != rbp)
                int64_t rdi_2 = sx.q(arg2[1].d)
                int32_t rax_4 = (rdi_2 + 1).d
                arg2[1].d = rax_4
                
                if (rax_4 s> *(arg2 + 0xc))
                    sub_1405a4f90(arg2)
                
                rdx = var_60
                int64_t rdi_3 = rdi_2 << 4
                int64_t* rdi_4 = rdi_3 + *arg2
                
                if (rdi_3 != neg.q(*arg2))
                    int32_t rsi_2 = r14 - arg_10
                    *rdi_4 = 0
                    rdi_4[1] = 0
                    int16_t* rbp_1 = rdx + (sx.q(rbp) << 1)
                    
                    if (rbp_1 != 0 && *rbp_1 != 0 && rsi_2 s> 0)
                        int32_t rdx_2 = 0
                        
                        if (rsi_2 + 1 s> 0)
                            sub_1405947f0(rdi_4, rsi_2 + 1)
                            rdx_2 = rdi_4[1].d
                        
                        int32_t rax_8 = rsi_2 + 1 + rdx_2
                        rdi_4[1].d = rax_8
                        
                        if (rax_8 s> *(rdi_4 + 0xc))
                            sub_140594770(rdi_4)
                        
                        UnDecorator::getReferenceType(*rdi_4, rbp_1, rsi_2 * 2)
                        *(*rdi_4 + (sx.q(rdi_4[1].d) << 1) - 2) = 0
                        rdx = var_60
            else
                rdx = var_60
            
            rdi = arg1
            rbp = rbx_1.d + r14
            rbx = arg4
            r14 = rbp
            rsi = arg3
            arg_10 = rbp
            continue
    
    rdi = arg1
    r14 += 1

if (arg5 != 0)
    int32_t var_68_1 = r9 - rbp

if (arg5 == 0 || r9 != rbp)
    int64_t rbx_2 = sx.q(arg2[1].d)
    int32_t rax_10 = (rbx_2 + 1).d
    arg2[1].d = rax_10
    
    if (rax_10 s> *(arg2 + 0xc))
        sub_1405a4f90(arg2)
        rdx = var_60
    
    int64_t rbx_3 = rbx_2 << 4
    int64_t* rbx_4 = rbx_3 + *arg2
    
    if (rbx_3 != neg.q(*arg2))
        *rbx_4 = 0
        rbx_4[1] = 0
        int16_t* rdi_5 = rdx + (sx.q(rbp) << 1)
        
        if (rdi_5 != 0 && *rdi_5 != 0)
            do
                r15 += 1
            while (rdi_5[r15] != 0)
            
            if (r15.d + 1 s> 0)
                sub_1405947f0(rbx_4, r15.d + 1)
                r13 = rbx_4[1].d
            
            int32_t rax_12 = r15.d + 1 + r13
            rbx_4[1].d = rax_12
            
            if (rax_12 s> *(rbx_4 + 0xc))
                sub_140594770(rbx_4)
            
            UnDecorator::getReferenceType(*rbx_4, rdi_5, (r15.d + 1) * 2)

return zx.q(arg2[1].d)
