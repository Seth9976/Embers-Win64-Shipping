// 函数: sub_1410fa690
// 地址: 0x1410fa690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg2 + 0x8c)
int32_t rax = *(arg1 + 0x3d0)

if (rbx != rax)
    bool cond:1_1 = *(arg2 + 0x14) u> 0
    *(arg2 + 0x8c) = rax
    
    if (cond:1_1)
        void*** rdx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_1 = &rdx_2[3]
        
        if (rax_1 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x20)
            rdx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_1 = &rdx_2[3]
        
        *(arg2 + 0x30) = rax_1
        int64_t* rax_2 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_2 = rdx_2
        int32_t rax_3 = *(arg2 + 0x8c)
        *(arg2 + 8) = &rdx_2[1]
        rdx_2[1] = 0
        *rdx_2 = &data_142f11588
        rdx_2[2].d = rax_3
    else
        *(arg2 + 0x90) = rax

sub_141986d90(arg2)
char rax_4 = sub_141104170(arg1, arg2)
char r9

if (*(arg1 + 0x3dd) == 0 || *(arg1 + 0x3e0) - 1 u> 1)
    r9 = 1
else
    r9 = 0

sub_1413948c0(&data_143ec4c60, arg2, rax_4 == 0, r9)

if (*(arg1 + 0x3dd) != 0 && *(arg1 + 0x3e0) == 0)
    sub_1410f9e90(arg1, arg2, &data_143ec4c60, 0)

sub_141096650(arg2)
int32_t result

if (*(arg2 + 0x8c) != rbx)
    bool cond:2_1 = *(arg2 + 0x14) u> 0
    *(arg2 + 0x8c) = rbx
    
    if (cond:2_1)
        void*** rdx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_5 = &rdx_11[3]
        
        if (rax_5 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x20)
            rdx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_5 = &rdx_11[3]
        
        *(arg2 + 0x30) = rax_5
        int64_t* rax_6 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_6 = rdx_11
        result = *(arg2 + 0x8c)
        *(arg2 + 8) = &rdx_11[1]
        rdx_11[1] = 0
        *rdx_11 = &data_142f11588
        rdx_11[2].d = result
    else
        *(arg2 + 0x90) = rbx

result.b = 1
return result
