// 函数: sub_141eb86e0
// 地址: 0x141eb86e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14325a580

if (sub_140d3e110(&data_143f3a500) != 0)
    int64_t rbx_1 = arg1[0x32]
    
    if (rbx_1 != 0)
        uint64_t* rax_2 = sub_140a3f490(sub_141fe0c50(0))
        int32_t i = 0
        
        if (rax_2[1].d s> 0)
            int64_t r14_1 = 0
            
            do
                int64_t* rdi_2 = *rax_2 + r14_1
                
                if (rdi_2[1].d != 0)
                    int64_t* rcx_1 = *rdi_2
                    void arg_8
                    
                    if (rcx_1 != 0 && *(*(*rcx_1 + 0x30))(rcx_1, &arg_8) == rbx_1)
                        if (rdi_2[1].d != 0)
                            int64_t* rcx_2 = *rdi_2
                            
                            if (rcx_2 != 0)
                                (*(*rcx_2 + 0x38))(rcx_2, 0)
                                int64_t rcx_3 = *rdi_2
                                
                                if (rcx_3 != 0)
                                    *rdi_2 = sub_140a84c80(rcx_3, 0, 0)
                                
                                rdi_2[1].d = 0
                        
                        sub_140599630(rax_2, 0)
                        break
                
                i += 1
                r14_1 += 0x10
            while (i s< rax_2[1].d)

int64_t rcx_5 = arg1[0x30]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[0xf]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[9]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = arg1[3]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = arg1[1]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

*arg1 = &data_142d5ee90

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
