// 函数: sub_1420af5f0
// 地址: 0x1420af5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg3)
int64_t arg_20
sub_140d3a3a0(&arg_20, arg2)
int32_t arg_8
sub_14066d570(arg1, &arg_8, arg_20)
int64_t rax = sx.q(arg_8)
void* const rdx_3

if (rax.d == 0xffffffff)
    rdx_3 = nullptr
else
    rdx_3 = (rax << 5) + *arg1

int64_t* rdi = rdx_3 + 8

if (rdx_3 == 0)
    rdi = nullptr

int64_t* rdi_1

if (rdi == 0)
    rdi_1 = nullptr
else
    rdi_1 = *rdi

if (rdi_1 != 0 && sub_1420ce1d0(rdi_1, rsi.d) s> 0)
    int32_t i_1 = -1
    int32_t var_2c_1 = 0xffffffff
    sub_141d54100(rdi_1, rdi_1[1].d - *(rdi_1 + 0x34), 0)
    int64_t rax_2 = sx.q(rdi_1[9].d)
    
    if (rax_2.d != 0)
        void* rcx_4 = rdi_1[8]
        void* r8_1 = &rdi_1[7]
        
        if (rcx_4 != 0)
            r8_1 = rcx_4
        
        i_1 = *(r8_1 + (((rax_2 - 1) & rsi) << 2))
        int32_t i_2 = i_1
        
        if (i_1 != 0xffffffff)
            int64_t rdx_9 = *rdi_1
            int32_t i_3 = i_1
            int32_t i
            
            do
                int64_t rcx_5 = sx.q(i_1) * 3
                i = *(rdx_9 + (rcx_5 << 3) + 0x10)
                
                if (*(rdx_9 + (rcx_5 << 3)) == rsi.d)
                    break
                
                i_1 = i
            while (i != 0xffffffff)
            int32_t i_4 = i_1
    
    if ((rsi.d.q u>> 0x20).d != 0xffffffff)
        return *(*rdi_1 + sx.q(i_1) * 0x18 + 8)

return 0
