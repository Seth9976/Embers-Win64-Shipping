// 函数: sub_1409f6790
// 地址: 0x1409f6790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool r9 = sub_140b5b8a0(arg1[2], 0).b == 0
int64_t rax
rax.b = arg1[3] != 0
rax.b |= r9

if (rax.b != 0)
    rax = sub_140d3c6e0(arg1)
    
    if (rax != 0 && sub_140d1fd20(rax, *(arg1 + 8)) != 0)
        void var_28
        sub_140a96170(&var_28)
        sub_14065da90(&var_28, arg2)
        int32_t r8
        int32_t var_10 = r8
        int64_t* rax_1 = sub_140d3c6e0(arg1)
        int64_t rax_2 = sub_140d1fd30(rax_1, *(arg1 + 8))
        int64_t r9_1 = *rax_1
        (*(r9_1 + 0x210))(rax_1, rax_2, &var_28, r9_1)
        int64_t* var_20
        
        if (var_20 != 0)
            var_20[1].d -= 1
            
            if (var_20[1].d == 1)
                (**var_20)(var_20)
                int32_t rax_6 = *(var_20 + 0xc)
                *(var_20 + 0xc) -= 1
                
                if (rax_6 == 1)
                    (*(*var_20 + 8))(var_20, 1)
        
        int64_t* rdi_2 = arg2[1]
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t rbx_2 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (rbx_2 == 1)
                    (*(*rdi_2 + 8))(rdi_2, zx.q(rbx_2))
        
        uint64_t rax_3
        rax_3.b = 1
        return rax_3

int64_t* rdi_3 = arg2[1]

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t rbx_3 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (rbx_3 == 1)
            (*(*rdi_3 + 8))(rdi_3, zx.q(rbx_3))

rax.b = 0
return rax
