// 函数: sub_1426e7fc0
// 地址: 0x1426e7fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg2 + 0xa0)
int32_t rsi = 1

if (rbp != 0)
    void* rax_1 = sub_1427249f0()
    void* rdx = *(rbp + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        if (*(arg3 + 0x70) != 0)
            int64_t* rcx_1 = *(arg3 + 0x68)
            
            if (rcx_1 != 0)
                (*(*rcx_1 + 0x28))(rcx_1)
        
        int32_t var_20_1 = 0
        int64_t (* var_28)(int64_t* arg1) = sub_1426cb040
        void*** rax_5 = sub_140a84c80(0, 0x30, 0)
        
        if (rax_5 != 0)
            *rax_5 = &data_143084528
            sub_140d3a3a0(&rax_5[1], arg1)
            *(rax_5 + 0x10) = var_28.o
            rax_5[5] = sub_140a387b0()
            *rax_5 = &data_143084580
        
        if (&var_28 == arg3 + 0x68)
            goto label_1426e80ae
        
        if (rax_5 != 0)
            (*rax_5)[8](rax_5, arg3 + 0x68)
        label_1426e80ae:
            
            if (rax_5 != 0)
                (*rax_5)[7](rax_5, 0)
                int64_t rax_9 = sub_140a84c80(rax_5, 0, 0)
                
                if (rax_9 != 0)
                    sub_140a74f90(rax_9)
        else if (*(arg3 + 0x70) != 0)
            int64_t* rcx_8 = *(arg3 + 0x68)
            
            if (rcx_8 != 0)
                (*(*rcx_8 + 0x38))(rcx_8, 0)
                int64_t rcx_9 = *(arg3 + 0x68)
                
                if (rcx_9 != 0)
                    *(arg3 + 0x68) = sub_140a84c80(rcx_9, 0, 0)
                
                *(arg3 + 0x70) = 0
        
        if (sub_1426b95d0(rbp, arg3, 1, arg1) != 0)
            rsi = 3

return zx.q(rsi)
