// 函数: sub_1420d1c70
// 地址: 0x1420d1c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int64_t rsi_1 = arg3

if (arg3 == 0)
    return 

int64_t rax = sub_140d41340()

if (rax == 0)
    return 

int64_t rdx = rax + 0x30
rax = sx.q(*(rax + 0x38))

if (rax.d s> *(rsi_1 + 0x38) || *(*(rsi_1 + 0x30) + (rax << 3)) != rdx)
    return 

rax = *(arg1 + 0x10)

if (arg2 == 0)
    return 

int64_t var_38 = rax
int64_t* i_2

if (rax == 0)
    i_2 = nullptr
else
    i_2 = *(rax + 0x50)

int32_t var_28_1 = 0xffffffff
int16_t var_24_1 = 0x101
char var_22_1 = 0
sub_1420c88a0(&var_38)
int64_t* i_1

for (int64_t* i = i_2; i != 0; i = i_1)
    rax = i[5]
    int64_t arg_8 = rax
    
    if (rax == arg2)
        if (i != 0)
            void* rax_1 = sub_140d41340()
            
            if (rax_1 == 0)
                rax = 0
            else
                int64_t rax_2 = sx.q(*(rax_1 + 0x38))
                
                if (rax_2.d s> *(rsi_1 + 0x38))
                    rax = 0
                else
                    rax = rsi_1
                    
                    if (*(*(rsi_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
                        rax = 0
            
            void* rcx_4 = i[0x10]
            
            if (rcx_4 != 0)
                int64_t rcx_5 = sx.q(*(rcx_4 + 0x38))
                
                if (rcx_5.d s<= *(rax + 0x38) && *(*(rax + 0x30) + (rcx_5 << 3)) == rcx_4 + 0x30)
                    void* rax_4 = sub_140d41340()
                    int64_t rax_5
                    
                    if (rax_4 != 0)
                        rax_5 = sx.q(*(rax_4 + 0x38))
                    
                    if (rax_4 == 0 || rax_5.d s> *(rsi_1 + 0x38)
                            || *(*(rsi_1 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
                        rsi_1 = 0
                    
                    (*(*i + 0x148))(i, sx.q(*(i + 0x4c)) + arg1, rsi_1)
        
        break
    
    i_1 = i[4]
    sub_1420c88a0(&var_38)
