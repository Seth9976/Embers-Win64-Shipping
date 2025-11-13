// 函数: sub_1417fc3a0
// 地址: 0x1417fc3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg2[1].d
int32_t rbx = 0
int64_t rbp = *arg2
int64_t r15
r15.b = 0
int16_t* var_28 = nullptr
int32_t var_20 = rdi

if (rdi != 0)
    sub_1405a4c70(&var_28, rdi, 0)
    memcpy(var_28, rbp, rdi * 2)
else
    int32_t var_1c_1 = 0

int32_t rax = sub_140a23cf0(arg2, &data_142d84ee0, 1, 1, 0xffffffff)
int32_t rdx_2 = var_20
int64_t r10 = sx.q(rax)

if (rax s>= 0)
    int32_t rax_1 = rdx_2 - 1
    
    if (rdx_2 == 0)
        rax_1 = 0
    
    int32_t rax_2 = rax_1 - r10.d
    
    if (rdx_2 != 0)
        rbx = rdx_2 - 1
    
    int32_t rbx_1 = rbx - r10.d
    
    if (rax_2 s>= 0)
        if (rax_2 s< rbx_1)
            rbx_1 = rax_2
        
        if (rbx_1 != 0)
            int32_t rax_4 = rdx_2 - rbx_1
            
            if (rax_4 != r10.d)
                int16_t* r9_1 = var_28
                memmove(&r9_1[r10], &r9_1[sx.q(rbx_1 + r10.d)], (rax_4 - r10.d) * 2)
                rdx_2 = var_20
            
            var_20 = rdx_2 - rbx_1
            sub_1405a50a0(&var_28)
            rdx_2 = var_20

int64_t* rbx_2 = *(arg1 + 0x18)
void* rdi_3 = &rbx_2[sx.q(*(arg1 + 0x20)) * 4]

if (rbx_2 != rdi_3)
    while (true)
        if (**rbx_2 != 0x2e)
            goto label_1417fc4cc
        
        if (sub_140a236f0(&var_28, rbx_2, 1) == 0)
            rdx_2 = var_20
        label_1417fc4cc:
            int16_t* rax_10
            
            if (rbx_2[1].d == 0)
                rax_10 = &data_142d40450
            else
                rax_10 = *rbx_2
            
            int16_t* const rcx_7 = &data_142d40450
            
            if (rdx_2 != 0)
                rcx_7 = var_28
            
            if (sub_140a54510(rcx_7, rax_10) != 0)
                rbx_2 = &rbx_2[4]
                
                if (rbx_2 == rdi_3)
                    break
                
                rdx_2 = var_20
                continue
        
        r15.b = 1
        break

int16_t* rcx_8 = var_28

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return zx.q(r15.b)
