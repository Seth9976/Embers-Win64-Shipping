// 函数: sub_1409448d0
// 地址: 0x1409448d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x60) == 0 || **(arg1 + 0x48) == 0)
    int64_t* rax
    rax.b = 1
    return rax

int64_t* var_28 = nullptr
int32_t var_20 = 0

while (true)
    void* rsi_1 = **(arg1 + 0x48)
    
    if (rsi_1 == 0)
        break
    
    if (rsi_1 + 8 != &var_28)
        int64_t* rcx
        
        if (*(rsi_1 + 0x10) != 0)
            rcx = *(rsi_1 + 8)
        
        if (*(rsi_1 + 0x10) != 0 && rcx != 0)
            (*(*rcx + 0x40))(rcx, &var_28)
        else if (var_20 != 0)
            int64_t* rcx_1 = var_28
            
            if (rcx_1 != 0)
                (*(*rcx_1 + 0x38))(rcx_1, 0)
                int64_t* rcx_2 = var_28
                
                if (rcx_2 != 0)
                    var_28 = sub_140a84c80(rcx_2, 0, 0)
                
                var_20 = 0
    
    void* rdi_1 = *(arg1 + 0x48)
    *(arg1 + 0x48) = rsi_1
    void var_18
    
    if (&var_18 != rsi_1 + 8 && *(rsi_1 + 0x10) != 0)
        int64_t* rcx_3 = *(rsi_1 + 8)
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x38))(rcx_3, 0)
            int64_t rcx_4 = *(rsi_1 + 8)
            
            if (rcx_4 != 0)
                *(rsi_1 + 8) = sub_140a84c80(rcx_4, 0, 0)
            
            *(rsi_1 + 0x10) = 0
    
    if (rdi_1 != 0)
        sub_140745b20(rdi_1 + 8)
        j_sub_140a74f90(rdi_1)
    
    int64_t rdi_2 = sx.q(*(arg1 + 0x58))
    int32_t rax_6 = (rdi_2 + 1).d
    *(arg1 + 0x58) = rax_6
    
    if (rax_6 s> *(arg1 + 0x5c))
        sub_1405a4f90(arg1 + 0x50)
    
    int64_t* rdx_7 = (rdi_2 << 4) + *(arg1 + 0x50)
    *rdx_7 = 0
    rdx_7[1].d = 0
    
    if (&var_28 != rdx_7 && var_20 != 0)
        int64_t* rcx_8 = var_28
        
        if (rcx_8 != 0)
            (*(*rcx_8 + 0x40))(rcx_8)

int64_t* rbx_2 = *(arg1 + 0x50)
uint64_t rdi_3 = sx.q(*(arg1 + 0x58))
void* rsi_4 = &rbx_2[rdi_3 * 2]

if (rbx_2 != rsi_4)
    do
        if (rbx_2[1].d != 0)
            int64_t* rcx_9 = *rbx_2
            
            if (rcx_9 != 0 && (*(*rcx_9 + 0x28))(rcx_9).b != 0)
                int64_t* rcx_10
                
                if (rbx_2[1].d == 0)
                    rcx_10 = nullptr
                else
                    rcx_10 = *rbx_2
                
                (*(*rcx_10 + 0x50))(rcx_10)
        
        rbx_2 = &rbx_2[2]
    while (rbx_2 != rsi_4)
    
    rdi_3 = zx.q(*(arg1 + 0x58))

int32_t temp0 = rdi_3.d
int64_t* rax_8

if (temp0 s< 0)
    *(arg1 + 0x58) = 0
    int32_t i_2 = neg.d(rdi_3.d)
    
    if (*(arg1 + 0x5c) s< 0)
        sub_1405a4f90(arg1 + 0x50)
    
    rax_8 = (sx.q(rdi_3.d) << 4) + *(arg1 + 0x50)
    
    if (i_2 != 0)
        int32_t i
        
        do
            *rax_8 = 0
            rax_8[1].d = 0
            rax_8 = &rax_8[2]
            i = i_2
            i_2 -= 1
        while (i != 1)
else if (temp0 s> 0 && rdi_3.d != 0)
    int64_t* rbx_4 = *(arg1 + 0x50)
    int32_t i_3 = rdi_3.d
    int32_t i_1
    
    do
        sub_140745b20(rbx_4)
        rbx_4 = &rbx_4[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    int32_t rax_13 = *(arg1 + 0x58)
    
    if (rax_13 != rdi_3.d)
        int64_t rcx_13 = *(arg1 + 0x50)
        memmove(rcx_13, (sx.q(rdi_3.d) << 4) + rcx_13, (rax_13 - rdi_3.d) << 4)
        rax_13 = *(arg1 + 0x58)
    
    *(arg1 + 0x58) = rax_13 - rdi_3.d

if (var_20 == 0)
    rax_8 = var_28
label_140944b7c:
    
    if (rax_8 != 0)
        sub_140a74f90(rax_8)
else
    int64_t* rcx_14 = var_28
    
    if (rcx_14 != 0)
        (*(*rcx_14 + 0x38))(rcx_14, 0)
        rax_8 = var_28
        
        if (rax_8 != 0)
            rax_8 = sub_140a84c80(rax_8, 0, 0)
            var_28 = rax_8
        
        int32_t var_20_1 = 0
        goto label_140944b7c

rax_8.b = 1
return rax_8
