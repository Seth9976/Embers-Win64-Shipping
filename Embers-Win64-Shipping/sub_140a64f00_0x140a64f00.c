// 函数: sub_140a64f00
// 地址: 0x140a64f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = arg2[1].d - *(arg2 + 0x34)
int64_t* r9 = *(*arg1 + 8)
int64_t* rcx = r9[1]
int32_t* rdx = *rcx

if (&rdx[1] u> rcx[1])
    int32_t* rdx_1 = &arg_8
    
    if ((*(r9 + 0x29) & 0x20) != 0)
        sub_140b54070(r9, rdx_1, arg3)
    else
        (*(*r9 + 0x150))(r9, rdx_1, 4)
else
    arg_8 = *rdx
    int64_t* rax_5 = r9[1]
    *rax_5 += 4

char r13 = *(*(*arg1 + 8) + 0x28) & 1

if (r13 != 0)
    int32_t rdi_1 = arg_8
    
    if (rdi_1 s> arg2[1].d - *(arg2 + 0x34))
        sub_1409d9530(arg2, rdi_1)
        int32_t rax_12
        
        if (rdi_1 u< 4)
            rax_12 = 1
        else
            uint32_t rdi_2 = rdi_1 u>> 1
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rdi_2 + 8)
            int32_t rcx_4
            
            if (rdi_2 == 0xfffffff8)
                rcx_4 = 0x20
            else
                rcx_4 = 0x1f - temp0_2
            
            int32_t rcx_6 = rcx_4 << 0x1a s>> 0x1f
            uint64_t rflags_2
            char temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rdi_2 + 7)
            
            if (rcx_6 == 0)
                rax_12 = 1
            else
                rax_12 = 1 << ((not.d(rcx_6)).b & (0x20 - (0x1f - temp0_3)))
        
        int32_t rcx_9 = arg2[9].d
        
        if (rcx_9 == 0 || rcx_9 s< rax_12)
            arg2[9].d = rax_12
            sub_140a865b0(arg2)

void* var_68 = nullptr
int32_t i_2 = 0
int32_t* result
int512_t zmm1
result, zmm1 = sub_140a5dcb0(arg2, &var_68)
int32_t r12 = 0
void* r14 = var_68

if (arg_8 s> 0)
    do
        int64_t var_78 = 0
        int64_t var_70_1 = 0
        
        if (r13 == 0 && &var_78 != r14)
            int32_t rdi_4 = *(r14 + 8)
            int64_t rsi_1 = *r14
            var_70_1.d = rdi_4
            
            if (rdi_4 != 0)
                sub_1405a4c70(&var_78, rdi_4, 0)
                memcpy(var_78, rsi_1, rdi_4 * 2)
        
        int512_t zmm1_1 = sub_140a1d9d0(*(*arg1 + 8), &var_78, zmm1)
        
        if (r13 == 0)
            int32_t arg_10
            sub_140926e00(arg2, &arg_10, &var_78)
            int64_t rax_18 = sx.q(arg_10)
            void* const rdx_15
            
            if (rax_18.d == 0xffffffff)
                rdx_15 = nullptr
            else
                rdx_15 = *arg2 + rax_18 * 0x28
            
            result, zmm1 = sub_140a8b380(arg1, rdx_15 + 0x10, zmm1_1)
        else
            int128_t var_58 = zx.o(0)
            sub_140a8b380(arg1, &var_58, zmm1_1)
            int32_t var_48
            sub_14098dfb0(arg2, &var_48)
            int64_t* var_40
            sub_140596d10(var_40, &var_78)
            int64_t* rdi_5 = var_58:8.q
            var_40[2] = var_58.q
            var_40[3] = rdi_5
            
            if (rdi_5 != 0)
                rdi_5[1].d += 1
            
            var_40[4].d = 0xffffffff
            int32_t rax_14 = var_40[1].d
            int16_t* rdx_11
            
            if (rax_14 == 0)
                rdx_11 = &data_142d40450
            else
                rdx_11 = *var_40
            
            int32_t rcx_19 = rax_14 - 1
            
            if (rax_14 == 0)
                rcx_19 = 0
            
            void arg_18
            result, zmm1 =
                sub_140a70c80(arg2, &arg_18, sub_1405969c0(rcx_19, rdx_11), var_40, var_48, nullptr)
            
            if (rdi_5 != 0)
                rdi_5[1].d -= 1
                
                if (rdi_5[1].d == 1)
                    result = (**rdi_5)(rdi_5)
                    int32_t temp3_1 = *(rdi_5 + 0xc)
                    *(rdi_5 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        result = (*(*rdi_5 + 8))(rdi_5, 1)
        
        int64_t rdi_6 = var_78
        
        if (rdi_6 != 0)
            int64_t* rcx_26 = data_143ddb3f0
            
            if (rcx_26 == 0)
                zmm1 = sub_140a750a0()
                rcx_26 = data_143ddb3f0
            
            result = (*(*rcx_26 + 0x30))(rcx_26, rdi_6)
        
        r12 += 1
        r14 += 0x10
    while (r12 s< arg_8)
    
    r14 = var_68

int32_t i_1 = i_2
void* rdi_7 = r14

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rbx_1 = *rdi_7
        
        if (rbx_1 != 0)
            int64_t* rcx_27 = data_143ddb3f0
            
            if (rcx_27 == 0)
                sub_140a750a0()
                rcx_27 = data_143ddb3f0
            
            result = (*(*rcx_27 + 0x30))(rcx_27, rbx_1)
        
        rdi_7 += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)

if (r14 == 0)
    return result

int64_t* rcx_28 = data_143ddb3f0

if (rcx_28 == 0)
    sub_140a750a0()
    rcx_28 = data_143ddb3f0

return (*(*rcx_28 + 0x30))(rcx_28, r14)
