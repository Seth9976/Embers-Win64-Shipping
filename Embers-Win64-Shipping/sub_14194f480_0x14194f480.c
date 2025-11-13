// 函数: sub_14194f480
// 地址: 0x14194f480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x68)
int32_t r9 = 1

if (rax u<= 1)
    rax = 0

if (rax != 0)
    r9 = rax

int32_t rax_1 = 1

if ((*(arg1 + 0xe8) & 1) != 0)
    rax_1 = 6

int64_t r12 = sx.q(rax_1 * r9 * arg2 + arg3) << 3
int64_t* rbx_1 = *(r12 + *(arg1 + 0xa0))

if (rbx_1 != 0)
    rbx_1[1].d += 1

void* rsi_1 = sx.q(*(arg1 + 0x3c)) * 0x1c + &data_143efeda0
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
    
    int32_t rax_11 = *(arg1 + 0x68)
    char rcx_5 = *(rsi_1 + 0x18)
    
    if (rax_11 u<= 1)
        rax_11 = 0
    
    if (rax_11 == 0)
        if (rcx_5 == 0)
            data_143effac0(0xcf5, 1)
            int32_t r14_2
            
            if ((*(arg1 + 0xe8) & 1) == 0)
                r14_2 = *(arg1 + 0x84)
            else
                r14_2 = arg3 + 0x8515
            
            uint32_t rdx_19 = *(arg1 + 0x60) u>> arg2.b
            
            if (rdx_19 u<= 1)
                rdx_19 = 1
            
            data_143effb68(zx.q(r14_2), zx.q(arg2), 0, 0, rdx_19, rdx_19, *(rsi_1 + 0x10), 
                *(rsi_1 + 0x14), 0)
            data_143effac0(0xcf5, 4)
        else
            int32_t rcx_11 = 1
            int32_t r9_3 = *(arg1 + 0xe8) & 1
            void* r13_1 = arg1 + 0xd0
            
            if (r9_3 != 0)
                rcx_11 = 6
            
            void* r8_2 = r13_1
            void* rax_16 = *(r13_1 + 8)
            int32_t rcx_13 = rcx_11 * arg2 + arg3
            
            if (rax_16 != 0)
                r8_2 = rax_16
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(rcx_13)
            
            if (not(test_bit(*(r8_2 + (sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5) << 2)), 
                    rcx_13 & 0x1f)))
                int32_t r10_2 = arg3 + 0x8515
                
                if (r9_3 == 0)
                    r10_2 = *(arg1 + 0x84)
                
                uint32_t r9_5 = *(arg1 + 0x60) u>> arg2.b
                
                if (r9_5 u<= 1)
                    r9_5 = 1
                
                data_143effc30(zx.q(r10_2), zx.q(arg2), zx.q(*(rsi_1 + (zx.q(r15_1) << 2))), r9_5, 
                    r9_5, 0, rbx_1[2].d, 0)
                int32_t rcx_19 = 1
                
                if ((*(arg1 + 0xe8) & 1) != 0)
                    rcx_19 = 6
                
                void* rax_25 = *(r13_1 + 8)
                int32_t rcx_21 = rcx_19 * arg2 + arg3
                
                if (rax_25 != 0)
                    r13_1 = rax_25
                
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = sx.q(rcx_21)
                int64_t rdx_17 = sx.q((temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                *(r13_1 + (rdx_17 << 2)) |= 1 << (rcx_21.b & 0x1f)
            else
                int32_t r14_1
                
                if (r9_3 == 0)
                    r14_1 = *(arg1 + 0x84)
                else
                    r14_1 = arg3 + 0x8515
                
                uint32_t r8_4 = *(arg1 + 0x60) u>> arg2.b
                
                if (r8_4 u<= 1)
                    r8_4 = 1
                
                data_143effc48(zx.q(r14_1), zx.q(arg2), 0, 0, r8_4, r8_4, 
                    *(rsi_1 + (zx.q(r15_1) << 2)), rbx_1[2].d, 0)
    else if (rcx_5 == 0)
        data_143effac0(0xcf5, 1)
        uint32_t rdx_6 = *(arg1 + 0x60) u>> arg2.b
        
        if (rdx_6 u<= 1)
            rdx_6 = 1
        
        data_143effc08(zx.q(*(arg1 + 0x84)), zx.q(arg2), 0, 0, arg3, rdx_6, rdx_6, 1, 
            *(rsi_1 + 0x10), *(rsi_1 + 0x14), 0)
        data_143effac0(0xcf5, 4)
    else
        uint32_t rdx_3 = *(arg1 + 0x60) u>> arg2.b
        
        if (rdx_3 u<= 1)
            rdx_3 = 1
        
        data_143effc40(zx.q(*(arg1 + 0x84)), zx.q(arg2), 0, 0, arg3, rdx_3, rdx_3, 1, 
            *(rsi_1 + (zx.q(r15_1) << 2)), rbx_1[2].d, 0)

int64_t rax_33 = *(arg1 + 0xa0)
int64_t* rcx_25 = *(r12 + rax_33)
*(r12 + rax_33) = 0

if (rcx_25 != 0)
    rcx_25[1].d -= 1
    
    if (rcx_25[1].d == 1)
        (**rcx_25)(rcx_25, 1)

int64_t result = sub_141909fb0(0)
rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return result

return (**rbx_1)(rbx_1, 1)
