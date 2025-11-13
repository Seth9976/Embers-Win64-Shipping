// 函数: sub_140cd75b0
// 地址: 0x140cd75b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_38 = *arg2
int64_t var_28
sub_140cd3c60(&var_28, &var_38)
char arg_10 = 0
var_38:8.q = &arg_10
var_38.q = j_sub_140cd6f60
void* rax = sub_140a756e0(&var_38, &data_1439aa2e0)
int64_t rdi = var_28
int32_t var_20
void* rbx
int64_t arg_20

if (var_20 s<= 0)
label_140cd769e:
    arg_10 = 0
    var_38:8.q = &arg_10
    var_38.q = j_sub_140cd6f60
    int64_t r9_2 = **(sub_140a756e0(&var_38, &data_1439aa2e0) + 0x20)
    arg_20 = r9_2
    bool cond:0_1 = r9_2 != 0
    
    if (r9_2 != 0)
        uint32_t rcx_8 = (r9_2 u>> 4).d
        int32_t rdx_4 = (0x9e3779b9 - rcx_8) ^ rcx_8 << 8
        int32_t r11_4 = neg.d(rcx_8 + rdx_4) ^ rdx_4 u>> 0xd
        int32_t rcx_11 = (rcx_8 - rdx_4 - r11_4) ^ r11_4 u>> 0xc
        int32_t rdx_7 = (rdx_4 - rcx_11 - r11_4) ^ rcx_11 << 0x10
        int32_t r11_7 = (r11_4 - rdx_7 - rcx_11) ^ rdx_7 u>> 5
        int32_t rcx_14 = (rcx_11 - rdx_7 - r11_7) ^ r11_7 u>> 3
        int32_t rdx_10 = (rdx_7 - rcx_14 - r11_7) ^ rcx_14 << 0xa
        int32_t r11_10 = (r11_7 - rdx_10 - rcx_14) ^ rdx_10 u>> 0xf
        void* rax_27
        
        if (*(arg1 + 0x68) == *(arg1 + 0x94))
        label_140cd77aa:
            rax_27 = sub_140cd2820(arg1 + 0x60, r11_10, &arg_20)
        else
            void* r8_3 = arg1 + 0x98
            void* rcx_15 = *(r8_3 + 8)
            
            if (rcx_15 != 0)
                r8_3 = rcx_15
            
            int32_t rax_26 = *(r8_3 + (((sx.q(*(arg1 + 0xa8)) - 1) & sx.q(r11_10)) << 2))
            
            if (rax_26 == 0xffffffff)
            label_140cd77aa_1:
                rax_27 = sub_140cd2820(arg1 + 0x60, r11_10, &arg_20)
            else
                int64_t* rcx_19
                
                while (true)
                    rcx_19 = sx.q(rax_26) * 0x60 + *(arg1 + 0x60)
                    
                    if (*rcx_19 == r9_2)
                        break
                    
                    rax_26 = rcx_19[0xb].d
                    
                    if (rax_26 == 0xffffffff)
                        goto label_140cd77aa_2
                
                if (rax_26 == 0xffffffff || rcx_19 == 0)
                label_140cd77aa_2:
                    rax_27 = sub_140cd2820(arg1 + 0x60, r11_10, &arg_20)
                else
                    rax_27 = &rcx_19[1]
        
        sub_140cd2440(rax_27, &arg_10, &var_28, nullptr)
        rdi = var_28
        cond:0_1 = arg_20 != 0
    
    rbx.b = cond:0_1
else
    void* rax_2 = sub_140cbd0a0((sx.q(var_20 - 1) << 4) + rdi)
    
    if (rax_2 == 0)
        goto label_140cd769e
    
    int64_t rdx_1 = sx.q(*(rax + 0x18))
    
    if (rdx_1.d s<= 0)
        goto label_140cd769e
    
    int64_t r8_1 = *(rax + 0x10)
    int64_t r10_1 = sx.q(*(rax_2 + 0x38))
    void* r9_1 = *(r8_1 + (rdx_1 << 3) - 8)
    void* rax_3 = *(r9_1 + 0x10)
    
    if (r10_1.d s> *(rax_3 + 0x38) || *(*(rax_3 + 0x30) + (r10_1 << 3)) != rax_2 + 0x30)
        if ((rdx_1 - 2).d s< 0)
            goto label_140cd769e
        
        int64_t rdx_2 = rdx_1 - 2
        void** r8_2 = r8_1 + (rdx_2 << 3)
        
        while (true)
            r9_1 = *r8_2
            int64_t r11_1 = rdx_2
            void* rax_6 = *(r9_1 + 0x10)
            
            if (r10_1.d s<= *(rax_6 + 0x38) && *(*(rax_6 + 0x30) + (r10_1 << 3)) == rax_2 + 0x30)
                break
            
            rdx_2 -= 1
            r8_2 -= 8
            
            if (r11_1 s<= 0)
                goto label_140cd769e
        
        goto label_140cd77f6
    
label_140cd77f6:
    
    if (r9_1 == 0)
        goto label_140cd769e
    
    sub_140d3a3a0(&arg_20, r9_1)
    int64_t rax_29 = arg_20
    int32_t r14_3 = (rax_29 u>> 0x20).d ^ rax_29.d
    int64_t* rax_33
    
    if (*(arg1 + 0x18) == *(arg1 + 0x44))
    labelid_20:
        rax_33 = sub_140cd2980(arg1 + 0x10, r14_3, &arg_20)
    else
        void* rdx_18 = *(arg1 + 0x50)
        void* r9_4 = arg1 + 0x48
        
        if (rdx_18 != 0)
            r9_4 = rdx_18
        
        rbx = zx.q(*(r9_4 + (((sx.q(*(arg1 + 0x58)) - 1) & sx.q(r14_3)) << 2)))
        
        if (rbx.d == 0xffffffff)
        label_140cd78aa:
            rax_33 = sub_140cd2980(arg1 + 0x10, r14_3, &arg_20)
        else
            int64_t rcx_26 = *(arg1 + 0x10)
            int64_t rdi_2
            
            while (true)
                int64_t var_48 = rax_29
                rdi_2 = sx.q(rbx.d) * 0x60
                var_38.q = *(rdi_2 + rcx_26)
                
                if (sub_140664af0(&var_38, &var_48) != 0)
                    break
                
                rcx_26 = *(arg1 + 0x10)
                rbx = zx.q(*(rdi_2 + rcx_26 + 0x58))
                
                if (rbx.d == 0xffffffff)
                    goto label_140cd78aa_2
                
                rax_29 = arg_20
            
            if (rbx.d == 0xffffffff)
            label_140cd78aa_1:
                rax_33 = sub_140cd2980(arg1 + 0x10, r14_3, &arg_20)
            else
                void* rcx_28 = *(arg1 + 0x10)
                
                if (rcx_28 == neg.q(rdi_2))
                label_140cd78aa_2:
                    rax_33 = sub_140cd2980(arg1 + 0x10, r14_3, &arg_20)
                else
                    rax_33 = rcx_28 + rdi_2 + 8
    
    sub_140cd2440(rax_33, &arg_10, &var_28, nullptr)
    rdi = var_28
    rbx.b = 1

if (rdi != 0)
    sub_140a74f90(rdi)

return zx.q(rbx.b)
