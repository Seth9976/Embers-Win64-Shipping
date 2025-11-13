// 函数: sub_141b72f30
// 地址: 0x141b72f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_141b46500(arg2)
int32_t rax_1 = sub_1408e52c0(rax)
int64_t var_38
sub_141b464f0(rax, &var_38)
sub_140cea1e0()
char rax_2 = sub_140cc1670(&var_38, &data_143e1b870)
int64_t rbx_1

if (rax_2 != 0)
    rbx_1 = var_38

int64_t result

if (rax_2 == 0 || rbx_1 == 0)
    if (sub_140cc16a0(&var_38, sub_140bdfab0()) != 0)
        int64_t rbx_2 = var_38
        
        if (rbx_2 != 0)
            sub_1413f7120(arg2, rbx_2)
            return sub_141b973b0(arg1, rbx_2, arg4)
    
    sub_140cea340()
    
    if (sub_140cc1670(&var_38, &data_143e1b820).b != 0 && var_38 != 0)
        return sub_141bb1700(arg1, arg2, arg4, arg3)
    
    result.b = 0
else if (rax_1 == 0xffffffff)
    if (sub_141b76be0(rbx_1).b == 0)
        result.b = 0
    else
        if (((zx.q(*(*(rbx_1 + 8) + 0x10)) u>> 0x11).b & 1) == 0)
            result.b = *(rbx_1 + 0x3c) == 1
        else
            result.b = *(rbx_1 + 0x7b) != 0xff
        
        if (result.b == 0)
            result.b = 0
        else
            int64_t rdi_4 = sx.q(*(rbx_1 + 0x4c))
            void* rdi_5 = rdi_4 + arg1
            
            if (rdi_4 == neg.q(arg1))
                result.b = 0
            else
                sub_140a8cee0(arg2, rdi_5)
                
                if (arg4 == rdi_5)
                    *arg3 = rbx_1
                    result.b = 1
                else if (not(test_bit(zx.q(*(rbx_1 + 0x40)), 0x1e)))
                    (*(*rbx_1 + 0xb0))(rbx_1, arg4, rdi_5, 1)
                    *arg3 = rbx_1
                    result.b = 1
                else
                    memcpy(arg4, rdi_5, *(rbx_1 + 0x3c))
                    result.b = 1
                    *arg3 = rbx_1
else
    void* rcx_4 = *(rbx_1 + 0x78)
    int64_t* rdi_1 = sx.q(*(rbx_1 + 0x4c)) + arg1
    char rbp_1 = (*(rbx_1 + 0x80)).b
    int32_t r12_1 = *(rcx_4 + 0x3c)
    
    if (rax_1 s< 0 || rax_1 s>= rdi_1[1].d)
        result.b = 0
    else if (sub_141b76be0(rcx_4).b == 0)
        result.b = 0
    else
        void* rdx_1 = *(rbx_1 + 0x78)
        
        if (rdx_1 == 0 || ((zx.q(*(*(rdx_1 + 8) + 0x10)) u>> 0x11).b & 1) == 0)
            result.b = *(rdx_1 + 0x3c) == 1
        else
            result.b = *(rdx_1 + 0x7b) != 0xff
        
        if (result.b == 0 || rdi_1[1].d == 0)
            result.b = 0
        else
            result = *rdi_1
            
            if ((not.b(rbp_1) & 1) == 0 && (result.b & 1) != 0)
                result = (result s>> 1) + rdi_1
            
            int64_t rdi_2 = sx.q(r12_1 * rax_1)
            int64_t rdi_3 = rdi_2 + result
            
            if (rdi_2 == neg.q(result))
                result.b = 0
            else
                sub_140a8cee0(arg2, rdi_3)
                int64_t* rcx_8 = *(rbx_1 + 0x78)
                
                if (arg4 == rdi_3)
                    *arg3 = *(rbx_1 + 0x78)
                    result.b = 1
                else if (not(test_bit(zx.q(rcx_8[8].d), 0x1e)))
                    (*(*rcx_8 + 0xb0))(rcx_8, arg4, rdi_3, 1)
                    *arg3 = *(rbx_1 + 0x78)
                    result.b = 1
                else
                    memcpy(arg4, rdi_3, *(rcx_8 + 0x3c))
                    *arg3 = *(rbx_1 + 0x78)
                    result.b = 1

return result
