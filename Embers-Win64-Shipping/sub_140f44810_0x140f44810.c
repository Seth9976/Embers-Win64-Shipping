// 函数: sub_140f44810
// 地址: 0x140f44810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)
int64_t r9 = 0
int32_t rax

if (rbx != 0)
    rax = rbx[1].d
    
    if (rax == 0)
        rbx = nullptr
    else
        rbx[1].d = rax + 1
    
    if (rbx != 0)
        if (*(arg1 + 8) != 0)
            int64_t* rdi = arg2[1]
            
            if (rdi != 0)
                rdi[1].d += 1
            
            int64_t* rsi = *(arg1 + 0x10)
            
            if (rsi != 0)
                int32_t rax_1 = rsi[1].d
                
                if (rax_1 == 0)
                    rsi = nullptr
                else
                    rsi[1].d = rax_1 + 1
                
                if (rsi != 0)
                    r9 = *(arg1 + 8)
            
            int64_t var_38 = *arg2
            int64_t* var_30 = rdi
            int96_t zmm0 = (*(arg1 + 0x18)).12
            
            if (rdi != 0)
                rdi[1].d += 1
            
            zmm0.q(sx.q(zmm0:8.d) + r9, &var_38)
            
            if (rsi != 0)
                rsi[1].d -= 1
                
                if (rsi[1].d == 1)
                    (**rsi)(rsi)
                    int32_t temp6_1 = *(rsi + 0xc)
                    *(rsi + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*rsi + 8))(rsi, 1)
            
            if (rdi != 0)
                rdi[1].d -= 1
                
                if (rdi[1].d == 1)
                    (**rdi)(rdi)
                    int32_t temp8_1 = *(rdi + 0xc)
                    *(rdi + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*(*rdi + 8))(rdi, 1)
            
            if (rbx != 0)
                rbx[1].d -= 1
                
                if (rbx[1].d == 1)
                    (**rbx)(rbx)
                    int32_t temp10_1 = *(rbx + 0xc)
                    *(rbx + 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        (*(*rbx + 8))(rbx, 1)
            
            int64_t* rbx_1 = arg2[1]
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp11_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp11_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            int64_t rax_3
            rax_3.b = 1
            return rax_3
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t temp3_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx + 8))(rbx, 1)

int64_t* rbx_2 = arg2[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

rax.b = 0
return rax
