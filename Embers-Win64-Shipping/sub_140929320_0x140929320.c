// 函数: sub_140929320
// 地址: 0x140929320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1
sub_140926f00(arg1 + 0x38, &result_1, arg2)
int64_t result = sx.q(result_1)
int64_t rcx_1

if (result.d == 0xffffffff)
    rcx_1 = 0
else
    int64_t rdx_1 = result * 9
    result = *(arg1 + 0x38)
    rcx_1 = result + (rdx_1 << 3)

int64_t* r14 = rcx_1 + 0x30

if (rcx_1 == 0)
    r14 = nullptr

if (r14 == 0)
    int32_t i_3 = arg3[1].d
    void* rbx_1 = *arg3
    
    if (i_3 != 0)
        int32_t i
        
        do
            result = sub_14091a940(rbx_1 + 0x20)
            int64_t rcx_3 = *(rbx_1 + 8)
            
            if (rcx_3 != 0)
                result = sub_140a74f90(rcx_3)
            
            *rbx_1 = &data_142e1f570
            rbx_1 += 0x30
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    arg3[1].d = 0
    
    if (*(arg3 + 0xc) != 0)
        return sub_1405a5220(arg3, 0)
else if (arg3 != r14)
    int32_t i_4 = arg3[1].d
    void* rbx_2 = *arg3
    
    if (i_4 != 0)
        int32_t i_1
        
        do
            result = sub_14091a940(rbx_2 + 0x20)
            int64_t rcx_6 = *(rbx_2 + 8)
            
            if (rcx_6 != 0)
                result = sub_140a74f90(rcx_6)
            
            *rbx_2 = &data_142e1f570
            rbx_2 += 0x30
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
    
    int32_t i_5 = r14[1].d
    void* rbx_3 = *r14
    int32_t r8_1 = *(arg3 + 0xc)
    arg3[1].d = i_5
    
    if (i_5 != 0 || r8_1 != 0)
        result = sub_1405a4b40(arg3, i_5, r8_1)
        void* rdi_1 = *arg3
        
        if (i_5 != 0)
            void* rbx_4 = rbx_3 + 8
            int32_t i_2
            
            do
                *rdi_1 = &data_142e20698
                sub_140596d10(rdi_1 + 8, rbx_4)
                *(rdi_1 + 0x18) = *(rbx_4 + 0x10)
                *(rdi_1 + 0x20) = 0
                result = sub_140917270(rdi_1 + 0x20, *(rbx_4 + 0x18), *(rbx_4 + 0x20), 0, 0)
                rbx_4 += 0x30
                rdi_1 += 0x30
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
    else
        *(arg3 + 0xc) = 0

return result
