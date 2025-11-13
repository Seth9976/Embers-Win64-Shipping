// 函数: sub_141d51f20
// 地址: 0x141d51f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg3)
int64_t var_48
sub_140d3a3a0(&var_48, arg2)
int32_t arg_8
sub_14066d570(arg1, &arg_8, var_48)
int64_t rax = sx.q(arg_8)
int32_t rbx = 0
void* const rdx_3

if (rax.d == 0xffffffff)
    rdx_3 = nullptr
else
    rdx_3 = (rax << 5) + *arg1

int64_t* rsi_1 = rdx_3 + 8

if (rdx_3 == 0)
    rsi_1 = nullptr

int64_t* rsi_2

if (rsi_1 == 0)
    rsi_2 = nullptr
else
    rsi_2 = *rsi_1

if (rsi_2 != 0)
    sub_141d54100(rsi_2, rsi_2[1].d - *(rsi_2 + 0x34), 0)
    int64_t rax_1 = sx.q(rsi_2[9].d)
    
    if (rax_1.d != 0)
        void* rdx_6 = rsi_2[8]
        void* r14_1 = &rsi_2[7]
        void* rax_2 = r14_1
        
        if (rdx_6 != 0)
            rax_2 = rdx_6
        
        int32_t i = *(rax_2 + (((rax_1 - 1) & rdi) << 2))
        int32_t i_3 = i
        
        if (i != 0xffffffff)
            int64_t r8_1 = *rsi_2
            
            do
                int64_t rdx_7 = sx.q(i_3) * 3
                i = *(r8_1 + (rdx_7 << 3) + 0x10)
                
                if (*(r8_1 + (rdx_7 << 3)) == rdi.d)
                    break
                
                i_3 = i
            while (i != 0xffffffff)
        
        if (i_3 != 0xffffffff)
            int32_t i_1
            
            do
                rbx += 1
                i_1 = i
                
                if (i == 0xffffffff)
                    break
                
                int64_t r8_2 = *rsi_2
                
                do
                    int64_t rdx_8 = sx.q(i_1) * 3
                    i = *(r8_2 + (rdx_8 << 3) + 0x10)
                    
                    if (*(r8_2 + (rdx_8 << 3)) == rdi.d)
                        break
                    
                    i_1 = i
                while (i != 0xffffffff)
            while (i_1 != 0xffffffff)
            
            if (rbx s> 0)
                int32_t i_4 = -1
                int32_t var_38_1 = rdi.d
                int32_t var_34_1 = 0xffffffff
                sub_141d54100(rsi_2, rsi_2[1].d - *(rsi_2 + 0x34), 0)
                int64_t rcx_6 = sx.q(rsi_2[9].d)
                
                if (rcx_6.d != 0)
                    void* rax_5 = *(r14_1 + 8)
                    
                    if (rax_5 != 0)
                        r14_1 = rax_5
                    
                    i_4 = *(r14_1 + (((rcx_6 - 1) & rdi) << 2))
                    int32_t i_5 = i_4
                    
                    if (i_4 != 0xffffffff)
                        int64_t rdx_11 = *rsi_2
                        int32_t i_6 = i_4
                        int32_t i_2
                        
                        do
                            int64_t rcx_9 = sx.q(i_4) * 3
                            i_2 = *(rdx_11 + (rcx_9 << 3) + 0x10)
                            
                            if (*(rdx_11 + (rcx_9 << 3)) == rdi.d)
                                break
                            
                            i_4 = i_2
                        while (i_2 != 0xffffffff)
                        int32_t i_7 = i_4
                
                if ((var_38_1.q u>> 0x20).d != 0xffffffff)
                    return *(*rsi_2 + sx.q(i_4) * 0x18 + 8)

return 0
