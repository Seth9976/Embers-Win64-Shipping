// 函数: sub_140cae880
// 地址: 0x140cae880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
(*(*arg1 + 8))(arg1, sx.q(arg2[1].d) << 5, sx.q(*(arg2 + 0xc)) << 5)
int64_t r9 = *arg1
(*(r9 + 8))(arg1, zx.q(arg2[5].d + 0x1f) u>> 5 << 2, zx.q(*(arg2 + 0x2c) + 0x1f) u>> 5 << 2, r9)
int64_t* rcx_1 = arg1[1]
int64_t* result
int32_t var_208
void var_200
void** var_1d0

if ((arg1[5].b & 1) == 0)
    var_208 = arg2[1].d - *(arg2 + 0x34)
    int32_t* rdx_17 = *rcx_1
    
    if (&rdx_17[1] u> rcx_1[1])
        int32_t* rdx_18 = &var_208
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdx_18, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdx_18, 4)
    else
        var_208 = *rdx_17
        *rcx_1 += 4
    
    void* var_1f8
    int512_t zmm1_1 = sub_1407453e0(&var_1f8, arg2)
    void* var_1e8
    int32_t i_1
    
    for (int32_t i = i_1; i s< *(var_1e8 + 0x18); i = i_1)
        int32_t* rbx_3 = (sx.q(i) << 5) + *var_1f8
        int64_t* r9_2 = *(**SymBuffer::end(sub_140b4cb20(&var_1d0, arg1), &var_200) + 8)
        int64_t* rcx_24 = r9_2[1]
        int32_t* rdx_22 = *rcx_24
        
        if (&rdx_22[1] u<= rcx_24[1])
            *rbx_3 = *rdx_22
            int64_t* rax_35 = r9_2[1]
            *rax_35 += 4
        else if ((*(r9_2 + 0x29) & 0x20) != 0)
            sub_140b54070(r9_2, rbx_3, zmm1_1)
        else
            (*(*r9_2 + 0x150))(r9_2, rbx_3, 4)
        
        sub_140b4cbb0(&var_1d0)
        sub_1409ad9b0(arg1, &rbx_3[2], zmm1_1)
        int32_t var_1ec
        int32_t var_1e0 = var_1e0 & not.d(var_1ec)
        void var_1f0
        sub_14059bdd0(&var_1f0)
    
    result = arg1
else
    var_208 = 0
    int32_t* rdx_6 = *rcx_1
    
    if (&rdx_6[1] u> rcx_1[1])
        int32_t* rdx_7 = &var_208
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdx_7, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdx_7, 4)
    else
        var_208 = *rdx_6
        *rcx_1 += 4
    
    int512_t zmm1 = sub_140cb92f0(arg2, var_208)
    int32_t r14_1 = 0
    
    if (var_208 s<= 0)
        result = arg1
    else
        do
            int32_t rcx_4 = *(arg2 + 0x34)
            int64_t rdi_1
            
            if (rcx_4 == 0)
                rdi_1 = zx.q(arg2[1].d)
                int32_t rax_11 = (rdi_1 + 1).d
                arg2[1].d = rax_11
                
                if (rax_11 s> *(arg2 + 0xc))
                    sub_1405c4e40(arg2)
                
                sub_1405b2ba0(&arg2[2], 0)
            else
                rdi_1 = sx.q(arg2[6].d)
                uint64_t r8_6 = *arg2
                int64_t rdx_9 = sx.q(*((rdi_1 << 5) + r8_6 + 4))
                arg2[6].d = rdx_9.d
                *(arg2 + 0x34) = rcx_4 - 1
                
                if (rcx_4 != 1)
                    *((rdx_9 << 5) + r8_6) = 0xffffffff
            
            void* rax_12 = arg2[4]
            void* rcx_7 = &arg2[2]
            
            if (rax_12 != 0)
                rcx_7 = rax_12
            
            int32_t rax_13 = rdi_1.d
            
            if (rdi_1.d s< 0)
                rax_13 = (rdi_1 + 0x1f).d
            
            void* r8_7 = rcx_7 + (sx.q(rax_13 s>> 5) << 2)
            *r8_7 |= 1 << (rdi_1.b & 0x1f)
            int64_t rdi_4 = (sx.q(rdi_1.d) << 5) + *arg2
            *rdi_4 = 0
            *(rdi_4 + 8) = 0
            *(rdi_4 + 0x10) = 0
            *(rdi_4 + 0x18) = 0xffffffff
            int64_t* r9_1 = *(**SymBuffer::end(sub_140b4cb20(&var_1d0, arg1), &var_200) + 8)
            int64_t* rcx_13 = r9_1[1]
            int32_t* rdx_14 = *rcx_13
            
            if (&rdx_14[1] u<= rcx_13[1])
                *rdi_4 = *rdx_14
                int64_t* rax_21 = r9_1[1]
                *rax_21 += 4
            else if ((*(r9_1 + 0x29) & 0x20) != 0)
                sub_140b54070(r9_1, rdi_4, zmm1)
            else
                (*(*r9_1 + 0x150))(r9_1, rdi_4, 4)
            
            sub_140b4cbb0(&var_1d0)
            sub_1409ad9b0(arg1, rdi_4 + 8, zmm1)
            r14_1 += 1
        while (r14_1 s< var_208)
        
        result = arg1
__security_check_cookie(rax_1 ^ &var_228)
return result
