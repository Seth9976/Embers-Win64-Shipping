// 函数: sub_140fdc700
// 地址: 0x140fdc700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x80)

if (result != 0 && *(arg1 + 0x80) == 0)
    *(arg1 + 0x80) = result

int64_t* rbx = *(arg1 + 0x38)
int64_t* rcx = *(arg2 + 0x38)
*(arg1 + 0x38) = rcx

if (rcx != 0)
    result = (*(*rcx + 8))()

if (rbx != 0)
    result = (*(*rbx + 0x10))(rbx)

int64_t* rcx_2 = *(arg2 + 0x40)
int64_t* rbx_1 = *(arg1 + 0x40)
*(arg1 + 0x40) = rcx_2

if (rcx_2 != 0)
    result = (*(*rcx_2 + 8))()

if (rbx_1 != 0)
    result = (*(*rbx_1 + 0x10))(rbx_1)

uint64_t rbx_2 = 0

if (arg1 + 0x48 != arg2 + 0x48)
    int64_t* rdi_1 = *(arg1 + 0x48)
    int32_t i_2 = *(arg1 + 0x50)
    
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t* rcx_4 = *rdi_1
            
            if (rcx_4 != 0)
                result = (*(*rcx_4 + 0x10))(rcx_4)
            
            rdi_1 = &rdi_1[1]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t i_3 = *(arg2 + 0x50)
    int64_t* rdi_2 = *(arg2 + 0x48)
    int32_t r8_1 = *(arg1 + 0x54)
    *(arg1 + 0x50) = i_3
    
    if (i_3 != 0 || r8_1 != 0)
        result = sub_1405c4a00(arg1 + 0x48, i_3, r8_1)
        int64_t* r14_1 = *(arg1 + 0x48)
        
        if (i_3 != 0)
            int32_t i_1
            
            do
                int64_t* rcx_6 = *rdi_2
                *r14_1 = rcx_6
                
                if (rcx_6 != 0)
                    result = (*(*rcx_6 + 8))()
                
                r14_1 = &r14_1[1]
                rdi_2 = &rdi_2[1]
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0x54) = 0

if (*(arg1 + 0x80) u> 0)
    do
        int64_t* rcx_7 = *(arg2 + (rbx_2 << 3) + 0x60)
        int64_t* rdi_3 = *(arg1 + (rbx_2 << 3) + 0x60)
        *(arg1 + (rbx_2 << 3) + 0x60) = rcx_7
        
        if (rcx_7 != 0)
            result = (*(*rcx_7 + 8))()
        
        if (rdi_3 != 0)
            result = (*(*rdi_3 + 0x10))(rdi_3)
        
        rbx_2 = zx.q(rbx_2.d + 1)
    while (rbx_2.d u< *(arg1 + 0x80))

return result
