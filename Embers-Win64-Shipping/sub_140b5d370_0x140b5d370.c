// 函数: sub_140b5d370
// 地址: 0x140b5d370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2d8
int64_t rax_1 = __security_cookie ^ &var_2d8
int64_t* r12 = arg1
int64_t* rcx = arg5
int64_t r13 = arg3
int64_t r14 = sx.q(arg4)
int64_t* r15 = arg2
uint64_t result = zx.q(*(rcx + 0xc))
int64_t* rbx = *rcx
int32_t i_5 = rcx[1].d
int64_t* var_2a8 = rcx

if (r14.d s> result.d)
    if (i_5 != 0)
        int32_t i
        
        do
            int64_t rcx_2 = *rbx
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            rbx = &rbx[4]
            i = i_5
            i_5 -= 1
        while (i != 1)
        rcx = var_2a8
        result = zx.q(*(rcx + 0xc))
    
    rcx[1].d = 0
    
    if (result.d != r14.d)
        result = sub_1405a51b0(rcx, r14.d)
else
    if (i_5 != 0)
        int32_t i_1
        
        do
            int64_t rcx_1 = *rbx
            
            if (rcx_1 != 0)
                result = sub_140a74f90(rcx_1)
            
            rbx = &rbx[4]
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
        rcx = var_2a8
    
    rcx[1].d = 0

if (r14.d s> 0)
    int64_t r14_1 = 0
    int64_t var_288_1 = 0
    
    do
        int32_t i_6 = r15[0x81].d
        int32_t rbx_1 = 0
        int32_t i_2 = i_6
        int64_t* rax_2 = r15[0x80]
        
        if (i_6 s> 0)
            int64_t* r9 = r15
            
            if (rax_2 != 0)
                r9 = rax_2
            
            do
                int32_t rcx_4 = i_2 & 0x80000001
                
                if (rcx_4 s< 0)
                    rcx_4 = ((rcx_4 - 1) | 0xfffffffe) + 1
                
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(i_2)
                int32_t i_4 = (temp3_1 - temp2_1) s>> 1
                i_2 = i_4
                int32_t rax_6 = i_4 + rbx_1
                
                if (*(r13 + (r14_1 << 3)) u>= r9[sx.q(rax_6)])
                    rbx_1 = rax_6 + rcx_4
            while (i_2 s> 0)
        
        int64_t r12_3
        
        if (i_6 s<= 0 || rbx_1 s<= 0 || rbx_1 - 1 s>= i_6)
            int64_t var_2a0 = 0
            int64_t var_298_1 = 0
            sub_1405947f0(&var_2a0, 8)
            int32_t rdi_1 = var_298_1:4.d
            int32_t rbx_5 = var_298_1.d + 8
            var_298_1.d = rbx_5
            
            if (rbx_5 s> rdi_1)
                sub_140594770(&var_2a0)
                rdi_1 = var_298_1:4.d
                rbx_5 = var_298_1.d
            
            int64_t r15_2 = var_2a0
            UnDecorator::getReferenceType(r15_2, u"Unknown", 0x10)
            int64_t* rcx_22 = var_2a8
            r12_3 = *(r13 + (r14_1 << 3))
            var_2a0 = 0
            int64_t var_298_2 = 0
            int64_t r14_3 = sx.q(rcx_22[1].d)
            int32_t rax_17 = (r14_3 + 1).d
            rcx_22[1].d = rax_17
            
            if (rax_17 s> *(rcx_22 + 0xc))
                sub_1405c4e40(rcx_22)
                rcx_22 = var_2a8
            
            result = (r14_3 << 5) + *rcx_22
            *result = r15_2
            *(result + 8) = rbx_5
            *(result + 0xc) = rdi_1
            *(result + 0x10) = 0
        else
            HANDLE hProcess = *r12
            
            if (hProcess == 0)
                hProcess = GetCurrentProcess()
            
            HMODULE* r8 = r15[0x80]
            HMODULE* rdx_3 = r15
            
            if (r8 != 0)
                rdx_3 = r8
            
            wchar16 var_268[0x48]
            
            if (K32GetModuleFileNameExW(hProcess, 
                    *(rdx_3 + (sx.q(rbx_1) << 3) + -fffffffffffffff8), &var_268, 0x104) == 0)
                GetLastError()
                int64_t rcx_13 = 0
                int16_t i_3
                
                do
                    i_3 = *(rcx_13 + u"Unknown")
                    *(&var_268 + rcx_13) = i_3
                    rcx_13 += 2
                while (i_3 != 0)
            else
                wchar16* rax_9 = wcsrchr(&var_268, 0x5c)
                
                if (rax_9 != 0)
                    int64_t rax_10 = -1
                    
                    do
                        rax_10 += 1
                    while (rax_9[1 + rax_10] != 0)
                    
                    memmove(&var_268, &rax_9[1], (rax_10.d + 1) * 2)
                
                wchar16* rax_12 = wcsrchr(&var_268, 0x2e)
                
                if (rax_12 != 0)
                    *rax_12 = 0
            
            int64_t* rax_13 = r15[0x80]
            int64_t* rcx_14 = r15
            int64_t var_2b8 = 0
            int32_t rdi = 0
            
            if (rax_13 != 0)
                rcx_14 = rax_13
            
            int64_t var_2b0_1 = 0
            int32_t r15_1 = 0
            int64_t r14_2 = 0
            int64_t r13_2 = *(rcx_14 + (sx.q(rbx_1) << 3) + -fffffffffffffff8)
            r12_3 = *(arg3 + (r14_1 << 3)) - r13_2
            
            if (var_268[0] != 0)
                int64_t rbx_2 = -1
                
                do
                    rbx_2 += 1
                while (var_268[rbx_2] != 0)
                
                if (rbx_2.d + 1 s> 0)
                    sub_1405947f0(&var_2b8, rbx_2.d + 1)
                    r15_1 = var_2b0_1:4.d
                    rdi = var_2b0_1.d
                    r14_2 = var_2b8
                
                rdi += rbx_2.d + 1
                var_2b0_1.d = rdi
                
                if (rdi s> r15_1)
                    sub_140594770(&var_2b8)
                    r15_1 = var_2b0_1:4.d
                    rdi = var_2b0_1.d
                    r14_2 = var_2b8
                
                UnDecorator::getReferenceType(r14_2, &var_268, (rbx_2.d + 1) * 2)
            
            int64_t* rcx_18 = var_2a8
            var_2b8 = 0
            int64_t var_2b0_2 = 0
            int64_t rbx_4 = sx.q(rcx_18[1].d)
            int32_t rax_14 = (rbx_4 + 1).d
            rcx_18[1].d = rax_14
            
            if (rax_14 s> *(rcx_18 + 0xc))
                sub_1405c4e40(rcx_18)
                rcx_18 = var_2a8
            
            result = (rbx_4 << 5) + *rcx_18
            *result = r14_2
            *(result + 8) = rdi
            *(result + 0xc) = r15_1
            *(result + 0x10) = r13_2
            r13 = arg3
        
        r15 = arg2
        r14_1 = var_288_1 + 1
        *(result + 0x18) = r12_3
        r12 = arg1
        var_288_1 = r14_1
    while (r14_1 s< r14)

__security_check_cookie(rax_1 ^ &var_2d8)
return result
