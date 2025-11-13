// 函数: sub_141bea840
// 地址: 0x141bea840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141beee70(arg1)
int32_t rax = arg1[0x21].d
int32_t rdx

if (rax s>= 1)
    rdx = 0x19
    
    if (rax s< 0x19)
        rdx = rax
else
    rdx = 1

sub_140f16480(arg1[0x36], rdx)
int32_t temp0 = __maxss_xmmss_memss(0x322bcc77, *(arg1 + 0x10c))
uint64_t result = sub_140f16540(arg1[0x36], temp0)
sub_140f16560(arg1[0x36], arg1[0x22].d)
void* rsi = arg1[5]
arg1[0x35].b = 1

if (rsi != 0)
    void* rax_1 = sub_141bf6a40()
    void* rdx_1 = *(rsi + 0x10)
    result = sx.q(*(rax_1 + 0x38))
    
    if (result.d s<= *(rdx_1 + 0x38))
        uint64_t result_1 = result
        result = *(rdx_1 + 0x30)
        
        if (*(result + (result_1 << 3)) == rax_1 + 0x30)
            void* rbx_1 = *(rsi + 0x68)
            
            if (rbx_1 == 0)
                result = zx.q(*(rsi + 0x60))
            else
                if (*(rbx_1 + 0xa0) == 0)
                    result.b = 0
                else
                    int64_t* rcx_3 = *(rbx_1 + 0x98)
                    
                    if (rcx_3 == 0)
                        result.b = 0
                    else if ((*(*rcx_3 + 0x28))(rcx_3).b == 0)
                        result.b = 0
                    else
                        result.b = 1
                
                if (result.b != 0)
                    int64_t* rcx_4
                    
                    if (*(rbx_1 + 0xa0) == 0)
                        rcx_4 = nullptr
                    else
                        rcx_4 = *(rbx_1 + 0x98)
                    
                    *(rbx_1 + 0x90) = (*(*rcx_4 + 0x48))(rcx_4)
                
                result = zx.q(*(rbx_1 + 0x90))
            
            if (result.b == 0)
                arg1[0x35].b = result.b

return result
