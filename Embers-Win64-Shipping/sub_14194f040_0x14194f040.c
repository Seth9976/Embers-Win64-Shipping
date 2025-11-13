// 函数: sub_14194f040
// 地址: 0x14194f040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x68)
int32_t r9 = 1

if (rax != 0)
    r9 = rax

int32_t rax_1 = 1

if ((*(arg1 + 0xe8) & 1) != 0)
    rax_1 = 6

int64_t r12 = sx.q(rax_1 * r9 * arg2 + arg3) << 3
int64_t* rbx_1 = *(r12 + *(arg1 + 0xa0))

if (rbx_1 != 0)
    rbx_1[1].d += 1

void* r14_1 = sx.q(*(arg1 + 0x3c)) * 0x1c + &data_143efeda0
uint8_t r15_1 = (*(arg1 + 0x40) u>> 4).b & 1
sub_14194ec30(rbx_1)

if ((1 & (rbx_1[5].d u>> 1).b) == 0)
    void* rax_9 = sub_14190d690(*(arg1 + 0x70), 1)
    int32_t r9_1 = *(arg1 + 0x84)
    int32_t r8_1 = data_1439c7498 - 1
    int32_t r10_1 = *(arg1 + 0x80)
    int64_t rdx = sx.q(r8_1) * 5
    int64_t rcx_3 = *(rax_9 + 8)
    
    if (*(rcx_3 + (rdx << 3) + 0x10) != r9_1 || *(rcx_3 + (rdx << 3) + 0x14) != r10_1)
        int32_t var_58_1 = *(arg1 + 0x34)
        sub_14190a090(*(arg1 + 0x70), rax_9, r8_1, r9_1, r10_1, 0xffffffff)
    
    char rax_11 = *(r14_1 + 0x18)
    
    if (*(arg1 + 0x68) == 0)
        if (rax_11 == 0)
            data_143effac0(0xcf5, 1)
            int32_t rbp_2
            
            if ((*(arg1 + 0xe8) & 1) == 0)
                rbp_2 = *(arg1 + 0x84)
            else
                rbp_2 = arg3 + 0x8515
            
            char rcx_22 = arg2.b
            uint32_t r8_11 = *(arg1 + 0x64) u>> rcx_22
            uint32_t rdx_19 = *(arg1 + 0x60) u>> rcx_22
            
            if (r8_11 u<= 1)
                r8_11 = 1
            
            if (rdx_19 u<= 1)
                rdx_19 = 1
            
            data_143effb68(zx.q(rbp_2), zx.q(arg2), 0, 0, rdx_19, r8_11, *(r14_1 + 0x10), 
                *(r14_1 + 0x14), 0)
            data_143effac0(0xcf5, 4)
        else
            int32_t rcx_10 = 1
            int32_t r9_3 = *(arg1 + 0xe8) & 1
            void* r13_1 = arg1 + 0xd0
            
            if (r9_3 != 0)
                rcx_10 = 6
            
            void* r8_6 = r13_1
            void* rax_16 = *(r13_1 + 8)
            int32_t rcx_12 = rcx_10 * arg2 + arg3
            
            if (rax_16 != 0)
                r8_6 = rax_16
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(rcx_12)
            
            if (not(test_bit(*(r8_6 + (sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5) << 2)), 
                    rcx_12 & 0x1f)))
                int32_t r11_2 = arg3 + 0x8515
                
                if (r9_3 == 0)
                    r11_2 = *(arg1 + 0x84)
                
                char rcx_16 = arg2.b
                uint32_t r10_3 = *(arg1 + 0x64) u>> rcx_16
                uint32_t r9_7 = *(arg1 + 0x60) u>> rcx_16
                
                if (r10_3 u<= 1)
                    r10_3 = 1
                
                if (r9_7 u<= 1)
                    r9_7 = 1
                
                data_143effc30(zx.q(r11_2), zx.q(arg2), zx.q(*(r14_1 + (zx.q(r15_1) << 2))), r9_7, 
                    r10_3, 0, rbx_1[2].d, 0)
                int32_t rcx_18 = 1
                
                if ((*(arg1 + 0xe8) & 1) != 0)
                    rcx_18 = 6
                
                void* rax_25 = *(r13_1 + 8)
                int32_t rcx_20 = rcx_18 * arg2 + arg3
                
                if (rax_25 != 0)
                    r13_1 = rax_25
                
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = sx.q(rcx_20)
                int64_t rdx_17 = sx.q((temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                *(r13_1 + (rdx_17 << 2)) |= 1 << (rcx_20.b & 0x1f)
            else
                int32_t rbp_1
                
                if (r9_3 == 0)
                    rbp_1 = *(arg1 + 0x84)
                else
                    rbp_1 = arg3 + 0x8515
                
                char rcx_14 = arg2.b
                uint32_t r9_5 = *(arg1 + 0x64) u>> rcx_14
                uint32_t r8_8 = *(arg1 + 0x60) u>> rcx_14
                
                if (r9_5 u<= 1)
                    r9_5 = 1
                
                if (r8_8 u<= 1)
                    r8_8 = 1
                
                data_143effc48(zx.q(rbp_1), zx.q(arg2), 0, 0, r8_8, r9_5, 
                    *(r14_1 + (zx.q(r15_1) << 2)), rbx_1[2].d, 0)
    else if (rax_11 == 0)
        data_143effac0(0xcf5, 1)
        char rcx_8 = arg2.b
        uint32_t r8_5 = *(arg1 + 0x64) u>> rcx_8
        uint32_t rdx_6 = *(arg1 + 0x60) u>> rcx_8
        
        if (r8_5 u<= 1)
            r8_5 = 1
        
        if (rdx_6 u<= 1)
            rdx_6 = 1
        
        data_143effc08(zx.q(*(arg1 + 0x84)), zx.q(arg2), 0, 0, arg3, rdx_6, r8_5, 1, 
            *(r14_1 + 0x10), *(r14_1 + 0x14), 0)
        data_143effac0(0xcf5, 4)
    else
        char rcx_5 = arg2.b
        uint32_t r8_3 = *(arg1 + 0x64) u>> rcx_5
        uint32_t rdx_3 = *(arg1 + 0x60) u>> rcx_5
        
        if (r8_3 u<= 1)
            r8_3 = 1
        
        if (rdx_3 u<= 1)
            rdx_3 = 1
        
        data_143effc40(zx.q(*(arg1 + 0x84)), zx.q(arg2), 0, 0, arg3, rdx_3, r8_3, 1, 
            *(r14_1 + (zx.q(r15_1) << 2)), rbx_1[2].d, 0)

int64_t rax_33 = *(arg1 + 0xa0)
int64_t* rcx_24 = *(r12 + rax_33)
*(r12 + rax_33) = 0

if (rcx_24 != 0)
    rcx_24[1].d -= 1
    
    if (rcx_24[1].d == 1)
        (**rcx_24)(rcx_24, 1)

int64_t result = sub_141909fb0(0)
rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return result

return (**rbx_1)(rbx_1, 1)
