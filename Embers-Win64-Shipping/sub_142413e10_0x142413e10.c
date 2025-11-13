// 函数: sub_142413e10
// 地址: 0x142413e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg2
int64_t r14 = sx.q(arg3)
void* rax_3 = sub_1423f7090(&arg1[0x4c], sub_140b5ead0(rax.d) + rax:4.d, arg2)
int64_t rdx_1 = *arg1
int32_t rdx_2 = r14.d
uint64_t r12 = (*(rdx_1 + 0x150))(arg1, rdx_1)
uint64_t result

if (r14.d == 0)
label_142413f54:
    *(rax_3 + 0xc0) = arg4.d
    arg1[0x74].d += 1
    void* rsi_3 = ((r14 + 7) << 4) + rax_3
    int64_t rbp_4 = sx.q(*(rsi_3 + 8))
    int32_t rax_8 = (rbp_4 + 1).d
    *(rsi_3 + 8) = rax_8
    
    if (rax_8 s> *(rsi_3 + 0xc))
        sub_1405a4cf0(rsi_3)
    
    *(*rsi_3 + (rbp_4 << 2)) = arg1[0x74].d
    
    if ((*(rax_3 + 0x1c) & 2) == 0)
        int128_t zmm6 = *(r12 + 0x528)
        int64_t* rax_9 = sub_1424c7800()
        result = rax_9[0x23]
        
        if (result == 0)
            int64_t rdx_9 = *rax_9
            (*(rdx_9 + 0x390))(rax_9, rdx_9)
            result = rax_9[0x23]
        
        if (not(zmm6.d f- *(rax_3 + 0x18) f>= *(result + 0x78)))
            arg1[0x74].d += 1
            int64_t rbp_5 = sx.q(*(rax_3 + 0xa8))
            int32_t rax_10 = (rbp_5 + 1).d
            *(rax_3 + 0xa8) = rax_10
            
            if (rax_10 s> *(rax_3 + 0xac))
                sub_1405a4cf0(rax_3 + 0xa0)
            
            *(*(rax_3 + 0xa0) + (rbp_5 << 2)) = arg1[0x74].d
        
        *(rax_3 + 0x18) = zmm6.d
else if (rdx_2 == 1)
    *(rax_3 + 0xc0) = 0
    arg1[0x74].d += 1
    int64_t rbp_3 = sx.q(*(rax_3 + 0x88))
    int32_t rax_7 = (rbp_3 + 1).d
    *(rax_3 + 0x88) = rax_7
    
    if (rax_7 s> *(rax_3 + 0x8c))
        sub_1405a4cf0(rax_3 + 0x80)
    
    *(*(rax_3 + 0x80) + (rbp_3 << 2)) = arg1[0x74].d
else
    if (rdx_2 == 2)
        goto label_142413f54
    
    if (rdx_2 == 3)
        *(rax_3 + 0xc0) = arg4.d
        arg1[0x74].d += 1
        int64_t rbp_1 = sx.q(*(rax_3 + 0x78))
        int32_t rax_4 = (rbp_1 + 1).d
        *(rax_3 + 0x78) = rax_4
        
        if (rax_4 s> *(rax_3 + 0x7c))
            sub_1405a4cf0(rax_3 + 0x70)
        
        *(*(rax_3 + 0x70) + (rbp_1 << 2)) = arg1[0x74].d
        arg1[0x74].d += 1
        int64_t rbp_2 = sx.q(*(rax_3 + 0xa8))
        int32_t rax_6 = (rbp_2 + 1).d
        *(rax_3 + 0xa8) = rax_6
        
        if (rax_6 s> *(rax_3 + 0xac))
            sub_1405a4cf0(rax_3 + 0xa0)
        
        *(*(rax_3 + 0xa0) + (rbp_2 << 2)) = arg1[0x74].d

*(rax_3 + 0x1d) += 1

if (r14.d != 0)
    int64_t* rbx_3 = arg2[2]
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp3_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
    
    result.b = 1
    return result

int64_t* rsi_5 = arg2[2]
int64_t r14_1 = *arg2

if (rsi_5 != 0)
    rsi_5[1].d += 1

void* rbx_1 = arg1[0x28]
void* rbp_6 = rbx_1 + sx.q(arg1[0x29].d) * 0x28
int64_t* rdi

if (rbx_1 == rbp_6)
label_1424140c7:
    
    if (rsi_5 != 0)
        rsi_5[1].d -= 1
        
        if (rsi_5[1].d == 1)
            (**rsi_5)(rsi_5)
            int32_t temp5_1 = *(rsi_5 + 0xc)
            *(rsi_5 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rsi_5 + 8))(rsi_5, 1)
    
    rdi.b = 0
else
    while (true)
        int64_t rax_12 = *(rbx_1 + 0x10)
        
        if (rax_12 == r14_1 || rax_12 == data_143e1df78)
            char rax_13
            
            if ((*(rbx_1 + 8) & 4) != 0)
                rax_13 = sub_1424159f0(arg1)
            
            if ((*(rbx_1 + 8) & 4) != 0 && rax_13 == 0)
                goto label_1424140be
            
            char rax_14
            
            if ((*(rbx_1 + 8) & 2) != 0)
                rax_14 = sub_142415b10(arg1)
            
            if ((*(rbx_1 + 8) & 2) != 0 && rax_14 == 0)
                goto label_1424140be
            
            char rax_15
            
            if ((*(rbx_1 + 8) & 1) != 0)
                rax_15 = sub_142416250(arg1)
            
            if ((*(rbx_1 + 8) & 1) != 0 && rax_15 == 0)
                goto label_1424140be
            
            char rax_16
            
            if ((*(rbx_1 + 8) & 8) != 0)
                rax_16 = sub_142415a80(arg1)
            
            if ((*(rbx_1 + 8) & 8) != 0 && rax_16 == 0)
                goto label_1424140be
            
            if (rsi_5 != 0)
                rsi_5[1].d -= 1
                
                if (rsi_5[1].d == 1)
                    (**rsi_5)(rsi_5)
                    int32_t temp9_1 = *(rsi_5 + 0xc)
                    *(rsi_5 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        (*(*rsi_5 + 8))(rsi_5, 1)
            
            rdi.b = 1
            break
        
    label_1424140be:
        rbx_1 += 0x28
        
        if (rbx_1 == rbp_6)
            goto label_1424140c7

int64_t* rbx_2 = arg2[2]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp7_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp7_1 == 1)
            int64_t r8_2 = *rbx_2
            (*(r8_2 + 8))(rbx_2, 1, r8_2)

return zx.q(rdi.b)
