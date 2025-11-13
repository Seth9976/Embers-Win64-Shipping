// 函数: sub_142435740
// 地址: 0x142435740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = nullptr
int64_t var_28 = 0
int32_t var_20 = 0
sub_140d3ccc0(arg1, &var_28, 0, 0, 0)
int32_t rbx = 0

while (true)
    int64_t rax
    
    if (rbx s< 0 || rbx s>= var_20)
        rax.b = 0
    else
        rax.b = 1
    
    if (rax.b == 0)
        break
    
    void* rdi_1 = *(var_28 + (sx.q(rbx) << 3))
    
    if (rdi_1 != 0)
        void* rax_1 = sub_140cdddf0()
        void* rdx_1 = *(rdi_1 + 0x10)
        rax = sx.q(*(rax_1 + 0x38))
        
        if (rax.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax << 3)) == rax_1 + 0x30)
            void* result_1 = *(rdi_1 + 0x28)
            
            if (result_1 != 0)
                void* rax_2 = sub_1425be5e0()
                void* rdx_2 = *(result_1 + 0x10)
                rax = sx.q(*(rax_2 + 0x38))
                
                if (rax.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax << 3)) == rax_2 + 0x30)
                    result = result_1
                    int64_t rbx_2 = *(*(rdi_1 + 0x20) + 0x18)
                    
                    if (data_143a305d8 != data_143a30604)
                        int32_t rax_4 = sub_140b5ead0(rbx_2.d)
                        void* r8_3 = data_143a30610
                        void* rax_8 = &data_143a30608
                        
                        if (r8_3 != 0)
                            rax_8 = r8_3
                        
                        int32_t i =
                            *(rax_8 + ((sx.q(data_143a30618 - 1) & sx.q(rax_4 + rbx_2:4.d)) << 2))
                        
                        if (i != 0xffffffff)
                            int64_t r8_4 = data_143a305d0
                            
                            do
                                int64_t i_1 = sx.q(i)
                                int64_t rcx_6 = i_1 * 5
                                
                                if (*(r8_4 + (rcx_6 << 2)) == rbx_2)
                                    if (i != 0xffffffff)
                                        void* rax_10 = r8_4 + i_1 * 0x14
                                        
                                        if (rax_10 != 0 && rax_10 != -8)
                                            *(result_1 + 0x11a) = *(rax_10 + 8)
                                    
                                    break
                                
                                i = *(r8_4 + (rcx_6 << 2) + 0xc)
                            while (i != 0xffffffff)
                    
                    if (arg2 != 0)
                        *arg2 = rdi_1
                    
                    break
    
    rbx += 1

int64_t rcx_7 = var_28

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

return result
