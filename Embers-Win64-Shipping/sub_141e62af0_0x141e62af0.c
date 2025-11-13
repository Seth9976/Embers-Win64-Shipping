// 函数: sub_141e62af0
// 地址: 0x141e62af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_38 = 0xffffffff
int64_t var_48 = 0
int32_t var_40 = 0
sub_140d3cc80(sub_14259c320(), &var_48, 1, 0x10, 0)
int32_t r8_1 = var_40
int64_t rdx_1 = var_48
int32_t rcx_1 = var_38 + 1
int32_t var_38_1 = rcx_1
uint64_t rax_1

if (rcx_1 s< r8_1)
    while (*(rdx_1 + (sx.q(rcx_1) << 3)) == 0)
        rax_1 = zx.q(rcx_1 + 1)
        var_38_1 = rax_1.d
        rcx_1 = rax_1.d
        
        if (rax_1.d s>= r8_1)
            break

while (true)
    if (rcx_1 s< 0 || rcx_1 s>= r8_1)
        rax_1.b = 0
    else
        rax_1.b = 1
    
    if (rax_1.b == 0)
        if (rdx_1 != 0)
            sub_140a74f90(rdx_1)
        
        *arg2 = 0
        break
    
    int64_t* r15_1 = *(rdx_1 + (sx.q(rcx_1) << 3))
    
    if (r15_1 == 0)
        goto label_141e62cf4
    
    void* rax_3 = sub_14259f000()
    void* rdx_2 = r15_1[2]
    int64_t rax_4 = sx.q(*(rax_3 + 0x38))
    
    if (rax_4.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
        rcx_1 = var_38_1
        r8_1 = var_40
        rdx_1 = var_48
    label_141e62cf4:
        int64_t* rbx_1 = *(rdx_1 + (sx.q(rcx_1) << 3))
        
        if (rbx_1 != 0)
            void* rax_18 = sub_1425a4180()
            void* rdx_9 = rbx_1[2]
            int64_t rax_19 = sx.q(*(rax_18 + 0x38))
            
            if (rax_19.d s> *(rdx_9 + 0x38) || *(*(rdx_9 + 0x30) + (rax_19 << 3)) != rax_18 + 0x30
                    || *(rbx_1 + 0x20c) != *(arg1 + 8))
                goto label_141e62d30
            
            if ((*(*rbx_1 + 0x2c8))(rbx_1) == 0)
                *arg2 = 0
            else
                *arg2 = *((*(*rbx_1 + 0x2c8))(rbx_1) + 0x18)
            
        label_141e62dde:
            int64_t rcx_17 = var_48
            
            if (rcx_17 != 0)
                sub_140a74f90(rcx_17)
            
            break
    else
        int64_t* i = r15_1[0x2d]
        int32_t rcx_3 = 0
        int64_t* var_58 = nullptr
        int64_t* r10_1 = nullptr
        int32_t var_50_1 = 0
        int32_t var_4c_1 = 0
        
        if (i != 0)
            void* rax_6 = sub_1425a2090()
            void* rdx_3 = i[2]
            int64_t rax_7 = sx.q(*(rax_6 + 0x38))
            
            if (rax_7.d s<= *(rdx_3 + 0x38) && *(*(rdx_3 + 0x30) + (rax_7 << 3)) == rax_6 + 0x30)
                int64_t* r8_4 = var_58
                int64_t rdi_1 = sx.q(var_50_1)
                int64_t* rax_9 = r8_4
                void* rdx_4 = &r8_4[rdi_1]
                
                if (r8_4 != rdx_4)
                    while (*rax_9 != i)
                        rax_9 = &rax_9[1]
                        
                        if (rax_9 == rdx_4)
                            goto label_141e62c3c
                
                if (r8_4 == rdx_4 || ((rax_9 - r8_4) s>> 3).d == 0xffffffff)
                label_141e62c3c:
                    int32_t rax_12 = (rdi_1 + 1).d
                    var_50_1 = rax_12
                    
                    if (rax_12 s> var_4c_1)
                        sub_1405a4d70(&var_58)
                        r8_4 = var_58
                    
                    r8_4[rdi_1] = i
            
            int32_t rax_14 = (*(*i + 0x2a8))(i)
            int32_t rsi_1 = 0
            int64_t i_1 = 0
            
            if (i[6].d s> 0)
                while (i_1 s< sx.q(rax_14))
                    sub_141e4ed70(r15_1, *(i[5] + (i_1 << 3)), &var_58)
                    rsi_1 += 1
                    i_1 += 1
                    
                    if (rsi_1 s>= i[6].d)
                        break
            
            rcx_3 = var_50_1
            r10_1 = var_58
        
        int32_t rdx_8 = 0
        
        if (rcx_3 s> 0)
            int64_t* r8_6 = r10_1
            
            do
                void* r9_1 = *(*r8_6 + 0x70)
                
                if (r9_1 != 0 && *(r9_1 + 0x20c) == *(arg1 + 8))
                    if ((*(*r15_1 + 0x2c8))(r15_1) == 0)
                        *arg2 = 0
                    else
                        *arg2 = *((*(*r15_1 + 0x2c8))(r15_1) + 0x18)
                    
                    int64_t* rcx_13 = var_58
                    
                    if (rcx_13 != 0)
                        sub_140a74f90(rcx_13)
                    
                    goto label_141e62dde
                
                rdx_8 += 1
                r8_6 = &r8_6[1]
            while (rdx_8 s< rcx_3)
        
        if (r10_1 != 0)
            sub_140a74f90(r10_1)
        
    label_141e62d30:
        rdx_1 = var_48
        r8_1 = var_40
        rcx_1 = var_38_1
    
    rax_1 = zx.q(rcx_1 + 1)
    var_38_1 = rax_1.d
    rcx_1 = rax_1.d
    
    if (rax_1.d s< r8_1)
        while (*(rdx_1 + (sx.q(rcx_1) << 3)) == 0)
            rax_1 = zx.q(rcx_1 + 1)
            var_38_1 = rax_1.d
            rcx_1 = rax_1.d
            
            if (rax_1.d s>= r8_1)
                break

return arg2
