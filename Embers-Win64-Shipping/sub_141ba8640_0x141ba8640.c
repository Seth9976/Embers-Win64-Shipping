// 函数: sub_141ba8640
// 地址: 0x141ba8640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

void* rax_2 = sub_140d21950(arg1, sub_141c04010())
int32_t i = 0
int64_t var_38
int64_t arg_8

if (rax_2 != 0)
    int64_t r8_1 = *rax_2
    int64_t* var_48 = nullptr
    int32_t var_40_1 = 0
    (*(r8_1 + 0x10))(rax_2, &var_48, r8_1)
    int64_t* rsi_1 = var_48
    int64_t rbp_1 = 0
    void* rdx_2 = &rsi_1[sx.q(var_40_1)]
    uint64_t r13_4 = (rdx_2 - rsi_1 + 7) u>> 3
    
    if (rsi_1 u> rdx_2)
        r13_4 = 0
    
    if (r13_4 != 0)
        do
            int64_t rax_4 = (*(*rax_2 + 0x18))(rax_2, *rsi_1)
            
            if (rax_4 != 0)
                int64_t rcx_4 = arg2[1]
                arg_8 = rax_4
                (*arg2)(rcx_4, &arg_8)
                int64_t rcx_5 = *arg2
                var_38 = rcx_5
                
                if (rcx_5 != 0)
                    int64_t var_30_1 = arg2[1]
                
                sub_141ba8640(rax_4, &var_38)
            
            rsi_1 = &rsi_1[1]
            rbp_1 += 1
        while (rbp_1 != r13_4)
        
        rsi_1 = var_48
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)

void* rax_6 = sub_141c06220()
void* rdx_6 = *(arg1 + 0x10)
uint64_t rax = sx.q(*(rax_6 + 0x38))

if (rax.d s> *(rdx_6 + 0x38) || *(*(rdx_6 + 0x30) + (rax << 3)) != rax_6 + 0x30)
    return 

rax = zx.q(*(arg1 + 0x110))

if (rax.d s<= 0)
    return 

int64_t rsi_2 = 0

do
    if (rsi_2 s< 0 || i s>= rax.d)
        rax.b = 0
    else
        rax.b = 1
    
    if (rax.b != 0)
        void* rbp_2 = *(*(arg1 + 0x108) + (rsi_2 << 3))
        
        if (rbp_2 != 0)
            int64_t rbp_3 = *(rbp_2 + 0x30)
            
            if (rbp_3 != 0)
                int64_t rcx_9 = arg2[1]
                arg_8 = rbp_3
                (*arg2)(rcx_9, &arg_8)
                int64_t rax_8 = *arg2
                var_38 = rax_8
                
                if (rax_8 != 0)
                    int64_t var_30_2 = arg2[1]
                
                sub_141ba8640(rbp_3, &var_38)
    
    rax = zx.q(*(arg1 + 0x110))
    i += 1
    rsi_2 += 1
while (i s< rax.d)
