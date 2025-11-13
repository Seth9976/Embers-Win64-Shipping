// 函数: sub_14062ddf0
// 地址: 0x14062ddf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
rsi.b = 0
int64_t* rdi = arg3

if (arg1 != 0)
    int64_t rcx = *(arg1[1] + 0x10)
    
    if (((rcx u>> 0x18).b & 1) != 0)
        if ((*(*arg1 + 0x130))(arg1) == 0)
            if ((*(*arg1 + 0x138))(arg1) != 0)
                if (rdi == 0 || ((zx.q(*(rdi[1] + 0x10)) u>> 0x18).b & 1) == 0)
                    rdi = nullptr
                
                int64_t rax_13 = (*(*arg1 + 0x168))(arg1, arg2)
                int64_t r8 = *rdi
                rsi.b = rax_13 s< (*(r8 + 0x168))(rdi, arg4, r8)
        else
            if (rdi == 0 || ((zx.q(*(rdi[1] + 0x10)) u>> 0x18).b & 1) == 0)
                rdi = nullptr
            
            (*(*arg1 + 0x178))(arg1, arg2)
            (*(*rdi + 0x178))(rdi, arg4)
            rsi.b = arg5.q f> arg5.q
    else if (((rcx u>> 0x11).b & 1) == 0)
        if (((rcx u>> 0xd).b & 1) != 0)
            int64_t var_28
            int64_t* rax_22 = sub_140b63b70(arg4, &var_28)
            int64_t var_38
            int64_t* rax_23 = sub_140b63b70(arg2, &var_38)
            int16_t* const rcx_17 = &data_142d40450
            int16_t* rdx_6
            
            if (rax_22[1].d == 0)
                rdx_6 = &data_142d40450
            else
                rdx_6 = *rax_22
            
            if (rax_23[1].d != 0)
                rcx_17 = *rax_23
            
            int32_t rax_24 = sub_140a54510(rcx_17, rdx_6)
            int64_t rcx_18 = var_38
            rsi.b = rax_24 s< 0
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
            
            int64_t rcx_19 = var_28
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
        else
            int16_t* const rcx_20
            int16_t* rdx_7
            
            if (((rcx u>> 0xe).b & 1) != 0)
                rcx_20 = &data_142d40450
                
                if (arg4[2] == 0)
                    rdx_7 = &data_142d40450
                else
                    rdx_7 = *arg4
                
                if (arg2[2] != 0)
                    rcx_20 = *arg2
                
                rsi.b = sub_140a54510(rcx_20, rdx_7) s< 0
            else if (((rcx u>> 0x1e).b & 1) != 0)
                int16_t** rax_27 = sub_140ac6680(arg4)
                int16_t** rax_28 = sub_140ac6680(arg2)
                rcx_20 = &data_142d40450
                
                if (rax_27[1].d == 0)
                    rdx_7 = &data_142d40450
                else
                    rdx_7 = *rax_27
                
                if (rax_28[1].d != 0)
                    rcx_20 = *rax_28
                
                rsi.b = sub_140a54510(rcx_20, rdx_7) s< 0
    else if ((*(arg1 + 0x7b) & *(zx.q(*(arg1 + 0x79)) + arg2)) == 0)
        if (rdi == 0 || ((zx.q(*(arg3[1] + 0x10)) u>> 0x11).b & 1) == 0)
            rdi = nullptr
        
        if ((*(rdi + 0x7b) & *(zx.q(*(rdi + 0x79)) + arg4)) != 0)
            rsi.b = 1

return zx.q(rsi.b)
