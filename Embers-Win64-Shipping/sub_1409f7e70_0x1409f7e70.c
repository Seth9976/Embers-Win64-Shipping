// 函数: sub_1409f7e70
// 地址: 0x1409f7e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t var_a8
int32_t* var_98 = &var_a8
void* rcx = nullptr
var_a8 = 0
char var_60 = 1
int128_t var_70 = var_98.o

if (arg4 != 0)
    int32_t rax_3 = *(arg4 + 0xc)
    
    if (rax_3 s< data_143e1d9b4)
        int16_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(rax_3)
        uint32_t rdx_1 = zx.d(temp1_1)
        int32_t rax_5 = temp2_1 + rdx_1
        rcx = *(data_143e1d9a0 + (sx.q(rax_5 s>> 0x10) << 3)) + sx.q(zx.d(rax_5.w) - rdx_1) * 0x18
    
    *(rcx + 8) &= 0xbfffffff

int64_t* rcx_5

if (arg3 != 0)
    rcx_5 = *arg2

int32_t result

if (arg3 == 0 || rcx_5 == 0)
    var_a8 = 4
    result = sub_1409f5f90(&var_70)
    int64_t* rbx_5 = *(arg1 + 8)
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            result = (**rbx_5)(rbx_5)
            int32_t temp4_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp4_1 == 1)
                result = (*(*rbx_5 + 8))(rbx_5, 1)
    
    int64_t* rbx_6 = arg2[1]
    
    if (rbx_6 != 0)
        result = rbx_6[1].d
        rbx_6[1].d -= 1
        
        if (result == 1)
            result = (**rbx_6)(rbx_6)
            int32_t rdi_3 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (rdi_3 == 1)
                result = (*(*rbx_6 + 8))(rbx_6, zx.q(rdi_3))
else if ((*(*rcx_5 + 0x40))(rcx_5) - 0xc8 u<= 6)
    int64_t* rax_13 = sub_1409f6b00()
    int64_t* rcx_9 = *arg2
    int64_t rdx_3 = *rcx_9
    (*(*rax_13 + 0x60))(rax_13, &var_98, (*(rdx_3 + 0x30))(rcx_9, rdx_3))
    int64_t* rbx_2
    
    if (var_98 != 0)
        if (arg4 != 0)
            uint128_t zmm1_1 = var_98.o
            uint128_t var_88 = zmm1_1
            void* rax_15 = _mm_bsrli_si128(zmm1_1, 8).q
            
            if (rax_15 != 0)
                *(rax_15 + 8) += 1
                zmm1_1 = var_88
            
            if (&var_88 != arg4 + 0x78)
                uint128_t var_58_1 = zmm1_1
                var_88 = *(arg4 + 0x78)
                *(arg4 + 0x78) = zmm1_1
            
            void* rcx_12 = var_88:8.q
            
            if (rcx_12 != 0)
                int32_t rax_16 = *(rcx_12 + 8)
                *(rcx_12 + 8) -= 1
                
                if (rax_16 == 1)
                    int64_t* rbx_3 = var_88:8.q
                    (**rbx_3)(rbx_3)
                    int32_t rax_18 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (rax_18 == 1)
                        int64_t* rcx_14 = var_88:8.q
                        (*(*rcx_14 + 8))(rcx_14, 1)
            
            int32_t rcx_15
            rcx_15.b = sub_140b5b8a0(arg5[2], 0) == 0
            
            if ((arg5[3] != 0 | rcx_15.b) != 0)
                void* rax_21 = sub_140d3c6e0(arg5)
                
                if (rax_21 != 0 && sub_140d1fd20(rax_21, *(arg5 + 8)) != 0)
                    void* var_78 = arg4
                    int64_t* rax_23 = sub_140d3c6e0(arg5)
                    int64_t rax_24 = sub_140d1fd30(rax_23, *(arg5 + 8))
                    int64_t r9 = *rax_23
                    (*(r9 + 0x210))(rax_23, rax_24, &var_78, r9)
        
        rbx_2 = arg6
        
        if (rbx_2 != 0)
            goto label_1409f809d
    else
        rbx_2 = arg6
        var_a8 = 6
        
        if (rbx_2 != 0)
        label_1409f809d:
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t rdi_2 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (rdi_2 == 1)
                    (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_2))
    sub_1409f5f90(&var_70)
    sub_140669d70(arg1)
    result = sub_140669db0(arg2)
else
    var_a8 = 5
    sub_1409f5f90(&var_70)
    sub_140669d70(arg1)
    result = sub_140669db0(arg2)

__security_check_cookie(rax_1 ^ &var_c8)
return result
