// 函数: sub_140fc4900
// 地址: 0x140fc4900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10
(*(*arg1 + 0xa0))(arg1, &arg_10)
int64_t arg_8
int64_t* rax_2

if (*(*(*arg2 + 0xa0))(arg2, &arg_8) == arg_10)
    int32_t rax_4 = (*(*arg2 + 0x30))(arg2)
    int64_t rdx_2 = *arg1
    
    if ((*(rdx_2 + 0x30))(arg1, rdx_2).d == rax_4)
        int64_t rdx_3 = data_143e2b878
        int64_t rax_5 = arg_10
        arg_8 = rax_5
        int32_t arg_18
        int64_t rax_6
        
        if ((-0x8000000000000000 & rdx_3) == 0 || rax_5 != 0)
            rax_6 = *sub_140b63580(&data_143e2b878, &arg_18)
            rax_6.b = arg_8 == rax_6
        else
            char* rdx_4 = rdx_3 & 0x7fffffffffffffff
            int64_t* rcx_3 = &arg_8
            
            if (data_143e2b884 != rax_5.b)
                rax_6 = sub_140b5b9d0(rcx_3, rdx_4)
            else
                rax_6 = sub_140b5b8c0(rcx_3, rdx_4)
        
        if (rax_6.b != 0)
            int64_t rax_8 = arg1[2]
            int64_t rax_9 = rax_8 - arg2[2]
            
            if (rax_8 == arg2[2])
                rax_9 = arg1[3] - arg2[3]
            
            rax_9.b = rax_9 == 0
            return rax_9
        
        int64_t rdx_6 = data_143e2b868
        int64_t rax_11 = arg_10
        arg_8 = rax_11
        
        if ((-0x8000000000000000 & rdx_6) == 0 || rax_11 != 0)
            rax_2 = *sub_140b63580(&data_143e2b868, &arg_18)
            rax_2.b = arg_8 == rax_2
        else
            char* rdx_7 = rdx_6 & 0x7fffffffffffffff
            int64_t* rcx_4 = &arg_8
            
            if (data_143e2b874 != rax_11.b)
                rax_2 = sub_140b5b9d0(rcx_4, rdx_7)
            else
                rax_2 = sub_140b5b8c0(rcx_4, rdx_7)
        
        if (rax_2.b != 0)
            int32_t rax_13
            rax_13.b = *(arg1 + 0xc) == *(arg2 + 0xc)
            return rax_13

rax_2.b = 0
return rax_2
