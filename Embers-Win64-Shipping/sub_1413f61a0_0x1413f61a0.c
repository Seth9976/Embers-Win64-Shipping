// 函数: sub_1413f61a0
// 地址: 0x1413f61a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[3]
int64_t* r14 = arg4
int64_t* arg_8 = rcx

if (rcx != 0)
    (*(*rcx + 0x30))()

int64_t* rcx_1 = arg1[3]
arg1[3] = 0

if (rcx_1 != 0)
    (*(*rcx_1 + 0x38))(rcx_1)

int64_t rsi = sx.q(arg1[2].d)
arg1[2].d = arg2
(*(*arg1 + 8))(arg1)
void* rcx_3 = arg_8[1]
void* var_88 = rcx_3
bool cond:0 = rcx_3 == 0

if (rcx_3 != 0)
    int32_t temp1_1 = *(rcx_3 + 8)
    *(rcx_3 + 8) += 1
    cond:0 = temp1_1 == 0xffffffff

uint64_t rflags
int32_t temp0_1
temp0_1, rflags = _bit_scan_reverse(arg3)
int32_t rcx_4

rcx_4 = cond:0 ? 0x20 : 0x1f - temp0_1

int32_t rcx_6 = rcx_4 << 0x1a s>> 0x1f
uint64_t rflags_1
int32_t temp0_2
temp0_2, rflags_1 = _bit_scan_reverse(arg3 - 1)
int32_t rdx

if (rcx_6 == 0)
    rdx = 0x20
else
    rdx = 0x1f - temp0_2

int32_t rdx_1 = 0
int32_t var_80 = 0
int64_t var_5c = 0
int32_t var_54 = 0
int32_t arg_18 = 0
int128_t var_7c
__builtin_memset(&var_7c, 0xff, 0x20)

if (rsi.d s> 0)
    int64_t rcx_8 = 0
    int64_t var_98_1 = 0
    
    do
        int32_t rcx_9 = *(*r14 + (rcx_8 << 2))
        
        if (rcx_9 != 0xffffffff)
            int32_t i = 0
            var_5c:4.d = rdx_1
            int32_t i_1 = 0
            
            do
                int32_t j = 0
                
                if (((0x20 - rdx) & not.d(rcx_6)) + 1 s> 0)
                    do
                        var_5c.d = j
                        void*** rbx_3 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                        int64_t r14_1 = *(arg1[3] + 0x10)
                        int64_t* rsi_1 = arg_8[2]
                        void* rax_10 = &rbx_3[0xa]
                        
                        if (rax_10 u> data_143f02bd0)
                            sub_140b0e3d0(&data_143f02bc8, 0x58)
                            rbx_3 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                            rax_10 = &rbx_3[0xa]
                        
                        data_143f02bac += 1
                        data_143f02bc8 = rax_10
                        *data_143f02ba0 = rbx_3
                        data_143f02ba0 = &rbx_3[1]
                        rbx_3[1] = 0
                        *rbx_3 = &data_142d56628
                        rbx_3[2].d = i
                        *(rbx_3 + 0x14) = var_7c.d
                        rbx_3[3].d = var_7c:4.d
                        *(rbx_3 + 0x1c) = var_7c:8.d
                        rbx_3[4].d = var_7c:0xc.d
                        int128_t var_6c
                        *(rbx_3 + 0x24) = var_6c.d
                        rbx_3[5].d = var_6c:4.d
                        *(rbx_3 + 0x2c) = var_6c:8.d
                        rbx_3[6].d = var_6c:0xc.d
                        *(rbx_3 + 0x34) = var_5c.d
                        rbx_3[7].d = var_5c:4.d
                        *(rbx_3 + 0x3c) = rcx_9
                        rbx_3[8] = rsi_1
                        rbx_3[9] = r14_1
                        
                        if ((*(*rsi_1 + 8))(rsi_1) == 0)
                            int64_t* rcx_11 = rbx_3[8]
                            
                            if ((*(*rcx_11 + 0x18))(rcx_11) == 0)
                                int64_t* rcx_12 = rbx_3[8]
                                
                                if ((*(*rcx_12 + 0x20))(rcx_12) == 0)
                                    int64_t* rcx_13 = rbx_3[8]
                                    (*(*rcx_13 + 0x10))(rcx_13)
                        
                        int64_t* rcx_14 = rbx_3[9]
                        
                        if ((*(*rcx_14 + 8))(rcx_14) == 0)
                            int64_t* rcx_15 = rbx_3[9]
                            
                            if ((*(*rcx_15 + 0x18))(rcx_15) == 0)
                                int64_t* rcx_16 = rbx_3[9]
                                
                                if ((*(*rcx_16 + 0x20))(rcx_16) == 0)
                                    int64_t* rcx_17 = rbx_3[9]
                                    (*(*rcx_17 + 0x10))(rcx_17)
                        
                        j += 1
                    while (j s< ((0x20 - rdx) & not.d(rcx_6)) + 1)
                    
                    i = i_1
                
                i += 1
                i_1 = i
            while (i s< 6)
            
            rdx_1 = arg_18
            r14 = arg4
        
        rdx_1 += 1
        rcx_8 = var_98_1 + 1
        arg_18 = rdx_1
        var_98_1 = rcx_8
    while (rcx_8 s< rsi)

sub_1419a2440(&data_1439c9260, &arg_8)
int64_t result = sub_1405d1550(&var_88)
int64_t* rcx_20 = arg_8

if (rcx_20 == 0)
    return result

return (*(*rcx_20 + 0x38))(rcx_20)
