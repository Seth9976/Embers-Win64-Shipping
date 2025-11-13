// 函数: sub_142444560
// 地址: 0x142444560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_140ce8e10(arg1, arg2)
(*(*arg2 + 0x130))(arg2, arg1 + 0x30)
int32_t rax_1 = arg2[8].d

if (rax_1 s< 0x1c0)
    int64_t i_1 = 4
    int64_t i
    
    do
        int32_t rax_2 = data_143dbb200
        int64_t var_28 = data_143dbb1f8.q
        int32_t var_20_1 = rax_2
        int32_t rax_3 = data_143dbb210
        int64_t var_1c = data_143dbb208
        int32_t var_14 = rax_3
        int32_t var_10 = 0x461c4000
        char var_c_1 = 0
        sub_1408d9160(arg2, &var_28, zmm1)
        int64_t* rcx_2 = arg2[1]
        int32_t* rdx_2 = *rcx_2
        
        if (&rdx_2[1] u> rcx_2[1])
            int32_t* rdx_3 = &var_1c
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b54070(arg2, rdx_3, zmm1)
            else
                (*(*arg2 + 0x150))(arg2, rdx_3, 4)
        else
            var_1c.d = *rdx_2
            *rcx_2 += 4
        
        int64_t* rcx_4 = arg2[1]
        int32_t* rdx_4 = *rcx_4
        
        if (&rdx_4[1] u> rcx_4[1])
            int32_t* rdx_5 = &var_1c:4
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b54070(arg2, rdx_5, zmm1)
            else
                (*(*arg2 + 0x150))(arg2, rdx_5, 4)
        else
            var_1c:4.d = *rdx_4
            *rcx_4 += 4
        
        int64_t* rcx_6 = arg2[1]
        int32_t* rdx_6 = *rcx_6
        
        if (&rdx_6[1] u> rcx_6[1])
            int32_t* rdx_7 = &var_14
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b54070(arg2, rdx_7, zmm1)
            else
                (*(*arg2 + 0x150))(arg2, rdx_7, 4)
        else
            var_14 = *rdx_6
            *rcx_6 += 4
        
        int64_t* rcx_8 = arg2[1]
        int32_t* rdx_8 = *rcx_8
        
        if (&rdx_8[1] u> rcx_8[1])
            int32_t* rdx_9 = &var_10
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b54070(arg2, rdx_9, zmm1)
            else
                (*(*arg2 + 0x150))(arg2, rdx_9, 4)
        else
            var_10 = *rdx_8
            *rcx_8 += 4
        
        i = i_1
        i_1 -= 1
    while (i != 1)
    rax_1 = arg2[8].d

void arg_8

if (rax_1 s< 0x199)
    (*(*arg2 + 0x130))(arg2, &arg_8)

if ((arg2[5].b & 3) == 0)
    sub_1408dc5a0(arg2, arg1 + 0x148, zmm1)
    zmm1 = sub_1423ff730(arg2, arg1 + 0x400, zmm1)
    (*(*arg2 + 0x130))(arg2, arg1 + 0x38)
    (*(*arg2 + 0x130))(arg2, arg1 + 0x40)
    (*(*arg2 + 0x130))(arg2, arg1 + 0x48)
    (*(*arg2 + 0x130))(arg2, arg1 + 0x50)
    (*(*arg2 + 0x130))(arg2, arg1 + 0xf8)
    (*(*arg2 + 0x130))(arg2, arg1 + 0x130)
    (*(*arg2 + 0x130))(arg2, arg1 + 0x128)
    (*(*arg2 + 0x130))(arg2, arg1 + 0x58)
    (*(*arg2 + 0x130))(arg2, arg1 + 0x120)
    (*(*arg2 + 0x130))(arg2, arg1 + 0x140)

sub_1408dc5a0(arg2, arg1 + 0x68, zmm1)
sub_1408dc5a0(arg2, arg1 + 0x98, zmm1)

if (((*(arg1 + 8) u>> 4).b & 1) == 0 && arg2[5].b s< 0)
    *(arg2 + 0x29) |= 8
    void* rax_29 = sub_140d21d80(arg1)
    *(rax_29 + 0x50) |= 0x20000

if ((arg2[6].d & 0x400000) != 0)
    sub_1408db650(arg2, arg1 + 0x538, zmm1)
    sub_1408db650(arg2, arg1 + 0x544, zmm1)

void* result = sub_140d21d80(arg1)

if (((*(result + 0x50) u>> 0x14).b & 1) != 0)
    *(arg1 + 8) &= 0xfffffffc

return result
