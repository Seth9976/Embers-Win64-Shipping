// 函数: sub_1406629a0
// 地址: 0x1406629a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const result = &data_142d836c8
int64_t rbx = arg1[0x10]
*arg1 = &data_142d836c8

if (rbx != 0)
    int32_t rdx_1 = data_14399fcf0
    int32_t rsi_1 = 0
    
    if (rdx_1 s> 0)
        int64_t r14_1 = 0
        
        do
            void*** rdi_2 = data_14399fce8 + r14_1
            
            if (rdi_2[1].d != 0)
                void** rcx = *rdi_2
                
                if (rcx != 0)
                    void arg_10
                    result = (*(*rcx + 0x30))(rcx, &arg_10)
                    
                    if (*result == rbx)
                        if (rdi_2[1].d != 0)
                            void** rcx_1 = *rdi_2
                            
                            if (rcx_1 != 0)
                                result = (*(*rcx_1 + 0x38))(rcx_1, 0)
                                void** rcx_2 = *rdi_2
                                
                                if (rcx_2 != 0)
                                    result = sub_140a84c80(rcx_2, 0, 0)
                                    *rdi_2 = result
                                
                                rdi_2[1].d = 0
                        
                        if (data_14399fcfc s<= 0)
                            int32_t rdx_3 = data_14399fcf0
                            int32_t rbx_1 = 0
                            int32_t rsi_2 = rdx_3
                            
                            if (rdx_3 s> 0)
                                int64_t* rdi_3 = nullptr
                                
                                do
                                    int64_t rax_2 = data_14399fce8
                                    
                                    if (*(rdi_3 + rax_2 + 8) == 0)
                                        sub_1405a4880(&data_14399fce8, rbx_1, 1, 1)
                                    else
                                        int64_t* rcx_3 = *(rdi_3 + rax_2)
                                        
                                        if (rcx_3 == 0)
                                            sub_1405a4880(&data_14399fce8, rbx_1, 1, 1)
                                        else if ((*(*rcx_3 + 0x20))(rcx_3) != 0)
                                            sub_1405a4880(&data_14399fce8, rbx_1, 1, 1)
                                        else
                                            rbx_1 += 1
                                            rdi_3 = &rdi_3[2]
                                    
                                    rdx_3 = data_14399fcf0
                                while (rbx_1 s< rdx_3)
                            
                            result = zx.q(rdx_3 * 2)
                            
                            if (result.d s<= 2)
                                result = 2
                            
                            data_14399fcf8 = result.d
                            
                            if (rsi_2 s> result.d && data_14399fcf4 != rdx_3)
                                result = sub_1405a5410(&data_14399fce8, rdx_3)
                        
                        break
                    
                    rdx_1 = data_14399fcf0
            
            rsi_1 += 1
            r14_1 += 0x10
        while (rsi_1 s< rdx_1)

void* rcx_4 = arg1[4]

if (rcx_4 != 0)
    result = nullptr
    bool z_1
    
    if (0 == *(rcx_4 + 0x78))
        *(rcx_4 + 0x78) = 0
        z_1 = true
    else
        result.b = *(rcx_4 + 0x78)
        z_1 = false
    
    if (z_1 && arg1[6].b == 0)
        if (data_143de5480 != 0)
            result.b = GetCurrentThreadId().d == data_143de5470
        
        if (data_143de5480 == 0 || result.b != 0)
            bool z_2
            
            do
                void* rcx_5 = arg1[4]
                
                if (rcx_5 == 0)
                    break
                
                result = nullptr
                
                if (0 == *(rcx_5 + 0x78))
                    *(rcx_5 + 0x78) = 0
                    z_2 = true
                else
                    result.b = *(rcx_5 + 0x78)
                    z_2 = false
            while (z_2)

if (arg1[8] != 0)
    void* rax_5 = arg1[0xa]
    void* rcx_6 = &arg1[0xc]
    
    if (rax_5 != 0)
        rcx_6 = rax_5
    
    result = (*(*rcx_6 + 0x10))(rcx_6)

int64_t* rbx_2 = arg1[5]

if (rbx_2 != 0)
    result = zx.q(rbx_2[1].d)
    rbx_2[1].d -= 1
    
    if (result.d == 1)
        (**rbx_2)(rbx_2)
        result = zx.q(*(rbx_2 + 0xc))
        *(rbx_2 + 0xc) -= 1
        
        if (result.d == 1)
            result = (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* rcx_9 = arg1[3]

if (rcx_9 != 0)
    int32_t rdi_4 = *(rcx_9 + 0xc)
    *(rcx_9 + 0xc) -= 1
    
    if (rdi_4 == 1)
        jump(*(*rcx_9 + 8))

return result
