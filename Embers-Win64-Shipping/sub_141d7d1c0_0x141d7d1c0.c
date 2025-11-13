// 函数: sub_141d7d1c0
// 地址: 0x141d7d1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = data_143f5b298

if (rbx != 0)
    void* rax_1 = sub_1424ad0c0()
    void* rdx_1 = *(rbx + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30
            && arg1[1].d u> 0)
        int64_t* rcx_1 = *(*(rbx + 0xe00) + 0x38)
        
        if ((*(*rcx_1 + 0x30))(rcx_1) != 0)
            int64_t* rax_8 = (*(*arg1 + 0x58))(arg1, zx.q(arg1[1].d))
            int64_t* rbx_1 = *(rbx + 0xe08)
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            int64_t var_18 = *(rbx + 0xe00)
            int64_t* var_10_1 = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            (*(*rax_8 + 0x10))(rax_8, &var_18, 0xffffffff)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp1_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
        else
            sub_140b721f0(0)

arg1[1].d = 0
return sub_1405a46b0(&data_1439aa970, arg1) __tailcall
