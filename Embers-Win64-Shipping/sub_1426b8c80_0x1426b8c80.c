// 函数: sub_1426b8c80
// 地址: 0x1426b8c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int32_t arg_18 = arg3
int32_t r15_1 = arg3
int32_t rbp_1 = *(arg1 + 0x118)

if (rbp_1 == 0)
    return 

int32_t rax_1 = *(arg1 + 0xc)
int32_t rsi_1 = 0
void* const rax_8

if (rax_1 s>= data_143e1d9b4)
    rax_8 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_1)
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_3 = temp1_1 + rdx_1
    rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q((rax_3 & 0xffff) - rdx_1) * 0x18

if (((*(rax_8 + 8) u>> 0x1d).b & 1) != 0)
    return 

int64_t* r14_1 = arg2[9]
uint32_t rax = sub_1426b0430(arg1, arg2)
int64_t r12_1 = sx.q(rax)

if (rax s< 0 || r12_1.d s>= rbp_1)
    return 

char r13_1 = *(arg1 + 0x263)
int32_t* var_48

if ((r14_1[0x11].b & 2) != 0)
    int64_t rcx_6 = sx.q(r14_1[0xc].d)
    
    if (rcx_6.d s> 0)
        int64_t* rax_10 = r14_1[0xb]
        int64_t rcx_7 = 0
        
        while (true)
            if (*rax_10 == arg2 || rax_10[1] == arg2)
                var_48 = &arg_18
                (*(*r14_1 + 0x2c0))(r14_1, arg1, 
                    zx.q(*(r14_1 + 0x52)) + *(r12_1 * 0x58 + *(arg1 + 0x110) + 0x30), zx.q(rsi_1), 
                    var_48)
                r15_1 = arg_18
                break
            
            rsi_1 += 1
            rcx_7 += 1
            rax_10 = &rax_10[6]
            
            if (rcx_7 s>= rcx_6)
                break
            
            continue

if (r15_1 == 3)
    sub_1426c2270(arg1)
else
    sub_1426c19e0(arg1, arg2)
    int32_t r15_2 = arg_18
    int64_t r14_2 = r12_1 * 0x58
    int64_t rbp_4 = zx.q(*(arg2 + 0x52)) + *(*(arg1 + 0x110) + r14_2 + 0x30)
    int64_t* rsi_2
    
    if ((*(arg2 + 0x55) & 4) == 0)
        rsi_2 = arg2
    else
        rsi_2 = sub_1426b2ab0(arg2, arg1, rbp_4)
    
    if (rsi_2 != 0)
        if ((rsi_2[0xd].b & 4) != 0)
            (*(*rsi_2 + 0x2d0))(rsi_2, arg1, rbp_4, zx.q(r15_2), var_48)
        
        if ((*(rsi_2 + 0x55) & 8) != 0)
            void* rax_15 = *(arg1 + 0xc0)
            
            if (rax_15 != 0)
                void* rcx_12 = *(rax_15 + 0x300)
                
                if (rcx_12 != 0)
                    arg4 = sub_14263a170(rcx_12, &rsi_2[5])
    
    uint64_t rax_16 = zx.q(*(arg1 + 0x260))
    int32_t r8_4 = *(arg1 + 0x118)
    void* rdx_12
    
    if (rax_16.d s< r8_4)
        rdx_12 = rax_16 * 0x58 + *(arg1 + 0x110)
    
    if (rax_16.d s< r8_4 && *(rdx_12 + 8) == arg2)
        char rax_18 = *(rdx_12 + 0x41)
        *(rdx_12 + 0x41) = 3
        
        if (rax_18 != 2)
            arg4 = sub_1426bd1d0(arg1, arg_18)
    else if (arg_18 == 2 && r12_1.d s< r8_4)
        int64_t rax_19 = *(arg1 + 0x110)
        
        if (*(rax_19 + r14_2 + 8) == arg2)
            *(rax_19 + r14_2 + 0x41) = 3
    
    sub_1426c2270(arg1)
    rax = zx.d(*(arg1 + 0x263))
    
    if ((rax.b & 4) == 0 && (r13_1 & 4) != 0)
        if ((rax.b & 0x10) == 0)
            if (*(arg1 + 0x190) != 0)
                *(arg1 + 0x1a8) |= 2
                
                if (*(arg1 + 0x18c) u< 0xffff)
                    int32_t arg_10 = 0xffffffff
                    *(arg1 + 0x18c) = 0xffffffff
            
            *(arg1 + 0x263) |= 8
        else
            sub_1426bfc00(arg1, 0, arg4)

if ((*(arg1 + 0x1bc) & 1) != 0 && *(arg1 + 0x1b0) != 0)
    sub_1426baf10(arg1)
