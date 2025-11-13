// 函数: sub_140f45220
// 地址: 0x140f45220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
sub_140de1590(&arg1[0x88], sub_140d91ed0(&var_68))
sub_140d952d0(&var_68)
int64_t var_78
int128_t zmm0 = *__FrameHandler4::HandlerMap::iterator::iterator(&var_78, 0, 0)
int64_t rax_2 = *arg1
*(arg1 + 0x4a0) = zmm0
int32_t* result = (*(rax_2 + 0x270))(arg1, 0)

if (arg1[0xb4].d != 0xffffffff)
    result = sub_140da2c00()
    sub_140db35c0(result, &arg1[0xb4])

if (arg1[0x72] != 0)
    result = arg1[0x73]
    
    if (result != 0 && result[2] s> 0)
        int64_t* rbx_1 = arg1[2]
        int64_t* r14_1 = nullptr
        int64_t rdi_1 = 0
        
        if (rbx_1 != 0)
            int32_t rax_3 = rbx_1[1].d
            
            if (rax_3 != 0)
                rbx_1[1].d = rax_3 + 1
                rax_3.b = 1
            
            if (rax_3.b == 0)
                rbx_1 = nullptr
            
            if (rbx_1 != 0)
                int32_t rax_4 = rbx_1[1].d
                rdi_1 = arg1[1]
                rbx_1[1].d = rax_4
                
                if (rax_4 == 0)
                    (**rbx_1)(rbx_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
        
        var_78 = rdi_1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        int64_t* rdi_2 = arg1[0x73]
        
        if (rdi_2 != 0)
            int32_t rax_7 = rdi_2[1].d
            
            if (rax_7 != 0)
                rdi_2[1].d = rax_7 + 1
                rax_7.b = 1
            
            if (rax_7.b == 0)
                rdi_2 = nullptr
            
            if (rdi_2 != 0)
                r14_1 = arg1[0x72]
        
        result = (*(*r14_1 + 0x248))(r14_1, &var_78)
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                result = (**rdi_2)(rdi_2)
                int32_t temp2_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    result = (*(*rdi_2 + 8))(rdi_2, 1)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                result = (**rbx_1)(rbx_1)
                int32_t temp5_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    result = (*(*rbx_1 + 8))(rbx_1, 1)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                result = (**rbx_1)(rbx_1)
                int32_t temp6_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    return (*(*rbx_1 + 8))(rbx_1, 1)

return result
