// 函数: sub_141cb31a0
// 地址: 0x141cb31a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x140))(arg2, arg1)
(*(*arg2 + 0x140))(arg2, arg1 + 0x10)
(*(*arg2 + 0x140))(arg2, arg1 + 0x20)
(*(*arg2 + 0x140))(arg2, arg1 + 8)
(*(*arg2 + 0x140))(arg2, arg1 + 0x18)
char arg_8
int512_t zmm1
int64_t* var_38

if ((arg2[5].b & 2) == 0)
    int64_t var_48 = 0
    int64_t var_40_1 = 0
    sub_141c956d0(arg2, &var_48, arg3)
    int32_t rdi_1 = var_40_1.d
    int64_t r15_1 = var_48
    
    if ((arg2[5].b & 1) != 0)
        sub_141c90860(r15_1, rdi_1, arg_8, arg_8)
    
    if (rdi_1 != 0)
        int64_t* rax_5 = j_sub_140a82f30(0x10)
        int64_t* rsi_1 = rax_5
        
        if (rax_5 == 0)
            rsi_1 = nullptr
        else
            *rax_5 = r15_1
            rax_5[1].d = rdi_1
            *(rax_5 + 0xc) = var_40_1:4.d
            int64_t var_40_2 = 0
            var_48 = 0
        
        void*** rax_6 = j_sub_140a82f30(0x18)
        void*** rdi_2 = rax_6
        
        if (rax_6 == 0)
            rdi_2 = nullptr
        else
            rax_6[1].d = 1
            *(rax_6 + 0xc) = 1
            *rdi_2 = &data_143211990
            rdi_2[2] = rsi_1
        
        var_38 = rsi_1
        void*** var_30_2 = rdi_2
        
        if (arg1 + 0x28 == &var_38)
        label_141cb3395:
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t temp1_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*rdi_2)[1](rdi_2, 1)
        else
            *(arg1 + 0x28) = rsi_1
            int64_t* rsi_2 = *(arg1 + 0x30)
            var_38 = nullptr
            
            if (rdi_2 == rsi_2)
                goto label_141cb3395
            
            void*** var_30_3 = nullptr
            *(arg1 + 0x30) = rdi_2
            
            if (rsi_2 != 0)
                rsi_2[1].d -= 1
                
                if (rsi_2[1].d == 1)
                    (**rsi_2)(rsi_2)
                    int32_t temp3_1 = *(rsi_2 + 0xc)
                    *(rsi_2 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rsi_2 + 8))(rsi_2, 1)
                
                rdi_2 = var_30_3
                goto label_141cb3395
    
    zmm1 = sub_1408464b0(&var_48)
else
    int64_t* rdi = *(arg1 + 0x28)
    
    if (rdi == 0)
        var_38 = nullptr
        int32_t var_30_1 = 0
        sub_141c956d0(arg2, &var_38, arg3)
        
        if ((arg2[5].b & 1) != 0)
            sub_141c90860(var_38, var_30_1, arg_8, arg_8)
        
        zmm1 = sub_1408464b0(&var_38)
    else
        zmm1 = sub_141c956d0(arg2, rdi, arg3)
        
        if ((arg2[5].b & 1) != 0)
            zmm1 = sub_141c90860(*rdi, rdi[1].d, arg_8, arg_8)
(*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x40)) << 2, sx.q(*(arg1 + 0x44)) << 2)
int32_t rax_12 = 0

if ((arg2[5].b & 1) == 0)
    rax_12 = *(arg1 + 0x40)

int64_t* rcx_17 = arg2[1]
arg_8.d = rax_12
int32_t* rdx_13 = *rcx_17

if (&rdx_13[1] u> rcx_17[1])
    int32_t* rdx_14 = &arg_8
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_14, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, rdx_14, 4)
else
    arg_8.d = *rdx_13
    *rcx_17 += 4

int32_t rcx_21 = arg_8.d

if (rcx_21 != 0)
    char rax_16 = *(arg2 + 0x29)
    
    if ((rax_16 & 1) != 0 || rcx_21 s<= 0 || ((*(arg2 + 0x2b) & 8) != 0 && rcx_21 s> 0x400000))
        *(arg2 + 0x29) = rax_16 | 1
    else
        *(arg1 + 0x40) = rcx_21
        
        if ((arg2[5].b & 1) != 0)
            sub_140638750(arg1 + 0x38, rcx_21, *(arg1 + 0x44))
            rcx_21 = *(arg1 + 0x40)
        
        (*(*arg2 + 0x150))(arg2, *(arg1 + 0x38), sx.q(rcx_21) << 2)
else if ((arg2[5].b & 1) != 0)
    *(arg1 + 0x40) = 0
    
    if (*(arg1 + 0x44) != 0)
        sub_1405dadb0(arg1 + 0x38, 0)

int64_t* rcx_23 = arg2[1]
int32_t* r8_9 = *rcx_23

if (&r8_9[1] u<= rcx_23[1])
    *(arg1 + 0x48) = *r8_9
    int64_t* result = arg2[1]
    *result += 4
    return result

if ((*(arg2 + 0x29) & 0x20) != 0)
    return sub_140b54070(arg2, arg1 + 0x48, zmm1) __tailcall

jump(*(*arg2 + 0x150))
