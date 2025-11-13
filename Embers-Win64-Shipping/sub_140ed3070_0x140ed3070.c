// 函数: sub_140ed3070
// 地址: 0x140ed3070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = nullptr
int32_t arg_8 = 0

if (*(arg1 - 0x58) != 0)
    int64_t* rcx = *(arg1 - 0x60)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx).b != 0)
        int64_t* rcx_1
        
        if (*(arg1 - 0x58) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 - 0x60)
        
        *(arg1 - 0x68) = (*(*rcx_1 + 0x48))(rcx_1).d

if (*(arg1 - 0x68) == 0 || *(arg1 + 0x230) == 0)
    return 

int64_t* rcx_2 = *(arg1 + 0x228)

if (rcx_2 == 0 || (*(*rcx_2 + 0x28))(rcx_2).b == 0)
    return 

int64_t* var_50
int128_t var_48
int64_t* rax
int32_t rbp_1
int64_t r15_1

if (*(arg1 + 0x140) - *(arg1 + 0x16c) s<= 0)
    rax = &var_48
    var_48 = zx.o(0)
    rbp_1 = 2
    r15_1 = 0
else
    void* r10_1 = arg1 + 0x148
    int32_t var_38_1 = 0xffffffff
    int32_t r11_1 = *(r10_1 + 0x18)
    int32_t r8_1 = 0
    int32_t var_34_1 = 0
    int32_t r9_1 = 0
    
    if (r11_1 != 0)
        void* rax_6 = *(r10_1 + 0x10)
        
        if (rax_6 != 0)
            r10_1 = rax_6
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rcx_3 = *r10_1
        int32_t var_34_3
        
        if (rcx_3 != 0)
        label_140ed3183:
            int32_t rax_13 = neg.d(rcx_3) & rcx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_13)
            int32_t rax_14
            
            if (rax_13 == 0)
                rax_14 = 0x20
            else
                rax_14 = 0x1f - temp0_2
            
            int32_t var_34_2 = r9_1 - rax_14 + 0x1f
            
            if (r9_1 - rax_14 + 0x1f s> r11_1)
                var_34_3 = r11_1
        else
            while (true)
                int64_t rcx_4 = sx.q(r8_1)
                r9_1 += 0x20
                r8_1 += 1
                
                if (rcx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rcx_3 = *(r10_1 + (rcx_4 << 2) + 4)
                int32_t var_38_2 = 0xffffffff
                
                if (rcx_3 != 0)
                    goto label_140ed3183
            
            var_34_3 = r11_1
    
    void* rax_16 = *(arg1 + 0x138)
    int64_t* rdx_2 = *(rax_16 + 8)
    r15_1 = *rax_16
    int64_t var_58 = r15_1
    var_50 = rdx_2
    
    if (rdx_2 != 0)
        rdx_2[1].d += 1
    
    rax = &var_58
    rbp_1 = 1

int64_t* rbx_1 = rax[1]
rax[1] = 0
*rax = 0

if ((rbp_1.b & 2) != 0)
    int64_t* rsi_1 = var_48:8.q
    rbp_1 &= 0xfffffffd
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t temp4_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)

if ((rbp_1.b & 1) != 0 && var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        (**var_50)(var_50)
        int32_t temp5_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_50 + 8))(var_50, 1)

if (rbx_1 != 0)
    rbx_1[1].d += 1

void* rdi_1

if (*(arg1 + 0x230) == 0)
label_140ed32e8:
    
    if (rbx_1 != 0)
        rdi_1 = &rbx_1[1]
    label_140ed32f1:
        int32_t temp6_1 = *rdi_1
        *rdi_1 -= 1
        
        if (temp6_1 == 1)
            (**rbx_1)(rbx_1)
            int32_t temp8_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
        
        int32_t temp7_1 = *rdi_1
        *rdi_1 -= 1
        
        if (temp7_1 == 1)
            (**rbx_1)(rbx_1)
            int32_t temp9_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
else
    int64_t* rcx_10 = *(arg1 + 0x228)
    
    if (rcx_10 == 0)
        goto label_140ed32e8
    
    if ((*(*rcx_10 + 0x28))(rcx_10).b == 0)
        goto label_140ed32e8
    
    if (*(arg1 + 0x230) != 0)
        r14 = *(arg1 + 0x228)
    
    var_48.q = r15_1
    rdi_1 = &rbx_1[1]
    var_48:8.q = rbx_1
    
    if (rbx_1 != 0)
        *rdi_1 += 1
    
    (*(*r14 + 0x50))(r14, &var_48, zx.q(arg2))
    
    if (rbx_1 != 0)
        goto label_140ed32f1
