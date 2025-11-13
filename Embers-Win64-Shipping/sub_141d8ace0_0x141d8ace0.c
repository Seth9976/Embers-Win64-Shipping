// 函数: sub_141d8ace0
// 地址: 0x141d8ace0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143db18d0

if (rcx == 0)
    sub_140a53c40()
    rcx = data_143db18d0

int64_t r8
r8.b = 1
int64_t* rax_1 = (*(*rcx + 0xb0))(rcx, u"r.AndroidDisableThreadedRenderingFirstLoad", r8)

if (rax_1 != 0)
    int64_t rdx = *rax_1
    
    if ((*(rdx + 0x90))(rax_1, rdx) != 0)
        int64_t* rcx_2 = data_143f5b298
        char rax_4
        
        if (rcx_2 != 0)
            rax_4 = (*(*rcx_2 + 0x270))(rcx_2)
        
        if (rcx_2 == 0 || rax_4 == 0)
            int32_t var_14_1 = 0x101
            int128_t var_38
            __builtin_memset(&var_38, 0, 0x1c)
            int32_t var_18_1 = 0xbf800000
            int16_t var_10_1 = 0
            int64_t* result = sub_141d85dd0(arg1 + 0xa0, &var_38)
            int32_t i_2
            int32_t i_1 = i_2
            int64_t* var_28
            int64_t* rbx_1 = var_28
            
            if (i_1 != 0)
                int32_t i
                
                do
                    int64_t rcx_4 = *rbx_1
                    
                    if (rcx_4 != 0)
                        result = sub_140a74f90(rcx_4)
                    
                    rbx_1 = &rbx_1[2]
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            if (var_28 != 0)
                result = sub_140a74f90(var_28)
            
            int64_t* rbx_2 = var_38:8.q
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    result = (**rbx_2)(rbx_2)
                    int32_t temp2_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        jump(*(*rbx_2 + 8))
            
            return result

return sub_141d85f00(arg1 + 0xa0, arg2)
