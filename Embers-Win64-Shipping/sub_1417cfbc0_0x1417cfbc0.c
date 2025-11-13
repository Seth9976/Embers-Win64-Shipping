// 函数: sub_1417cfbc0
// 地址: 0x1417cfbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg1 + 0x460)
int32_t rbx_1 = rbx - 1

if (rbx - 1 s>= 0)
    int32_t temp2_1
    
    do
        sub_1417d27c0(arg1, rbx_1)
        temp2_1 = rbx_1
        rbx_1 -= 1
    while (temp2_1 - 1 s>= 0)

if (sub_140a80f40() == 0)
    if (data_143f138f4 == 0)
        if (data_143de5480 == 0)
            goto label_1417cfbf7
        
        uint32_t rax_1
        rax_1.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_1.b != 0)
            goto label_1417cfbf7
    
    void var_38
    void** rax_2 = sub_1417d0030(&var_38, nullptr, 0xff)
    *(*rax_2 + 0x10) = arg1
    void* rcx_4 = *rax_2
    int32_t r8_1 = rax_2[2].d
    int64_t* rdx_2 = rax_2[1]
    int64_t* rbx_2 = *(rcx_4 + 0x20)
    int64_t* arg_10 = rbx_2
    int32_t* rsi_1 = &rbx_2[9]
    
    if (rbx_2 != 0)
        *rsi_1 += 1
        rbx_2 = arg_10
    
    sub_1405a5630(rcx_4, rdx_2, r8_1, 1)
    
    if (rbx_2 != 0)
        int32_t rax_3 = *rsi_1
        *rsi_1 -= 1
        
        if (rax_3 == 1)
            sub_140a2f6e0(arg_10)
else
label_1417cfbf7:
    void* rcx_1 = *(arg1 + 0x3e8)
    
    if (rcx_1 != 0)
        sub_1417d2920(rcx_1)

int64_t* result = *(arg1 + 0x468)
void* rcx_8 = &result[sx.q(*(arg1 + 0x470)) * 2]

if (result != rcx_8)
    while (result[1].d == 0 || *result == 0)
        result = &result[2]
        
        if (result == rcx_8)
            return result
    
    *(arg1 + 0x47c) += 1
    int32_t rax_4 = *(arg1 + 0x470)
    int32_t rcx_9 = *(arg1 + 0x47c)
    int64_t rbp
    rbp.b = 0
    int64_t rdi_1 = sx.q(rax_4 - 1)
    
    if (rax_4 - 1 s>= 0)
        int64_t rsi_3 = rdi_1 << 4
        int64_t temp4_1
        
        do
            int64_t rax_6 = *(arg1 + 0x468)
            
            if (*(rsi_3 + rax_6 + 8) == 0)
                rbp.b = 1
            else
                int64_t* rcx_10 = *(rsi_3 + rax_6)
                
                if (rcx_10 == 0)
                    rbp.b = 1
                else if ((*(*rcx_10 + 0x50))(rcx_10) == 0)
                    rbp.b = 1
            
            rsi_3 -= 0x10
            temp4_1 = rdi_1
            rdi_1 -= 1
        while (temp4_1 - 1 s>= 0)
        rcx_9 = *(arg1 + 0x47c)
    
    result = zx.q(rcx_9 - 1)
    *(arg1 + 0x47c) = result.d
    
    if (rbp.b != 0 && result.d s<= 0)
        int32_t rbp_1 = *(arg1 + 0x470)
        int32_t rdi_2 = 0
        int32_t rdx_3 = rbp_1
        
        if (rbp_1 s> 0)
            int64_t* rsi_4 = nullptr
            
            do
                int64_t rax_9 = *(arg1 + 0x468)
                
                if (*(rsi_4 + rax_9 + 8) == 0)
                    sub_1405a4880(arg1 + 0x468, rdi_2, 1, 1)
                else
                    int64_t* rcx_11 = *(rsi_4 + rax_9)
                    
                    if (rcx_11 == 0)
                        sub_1405a4880(arg1 + 0x468, rdi_2, 1, 1)
                    else if ((*(*rcx_11 + 0x20))(rcx_11) != 0)
                        sub_1405a4880(arg1 + 0x468, rdi_2, 1, 1)
                    else
                        rdi_2 += 1
                        rsi_4 = &rsi_4[2]
                
                rdx_3 = *(arg1 + 0x470)
            while (rdi_2 s< rdx_3)
        
        result = zx.q(rdx_3 * 2)
        
        if (result.d s<= 2)
            result = 2
        
        *(arg1 + 0x478) = result.d
        
        if (rbp_1 s> result.d && *(arg1 + 0x474) != rdx_3)
            return sub_1405a5410(arg1 + 0x468, rdx_3)

return result
