// 函数: sub_141506420
// 地址: 0x141506420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = arg4

if (*(arg1 + 0x80) != 0)
    sub_141500d90(arg1)

TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143ef1db8 s> *rdi_1)
    _Init_thread_header(&data_143ef1db8)
    
    if (data_143ef1db8 == 0xffffffff)
        atexit(sub_142ce8fb0)
        _Init_thread_footer(&data_143ef1db8)

if (data_143ef1dd0 s> *rdi_1)
    _Init_thread_header(&data_143ef1dd0)
    
    if (data_143ef1dd0 == 0xffffffff)
        atexit(sub_142ce8fd0)
        _Init_thread_footer(&data_143ef1dd0)

if (data_143ef1de8 s> *rdi_1)
    _Init_thread_header(&data_143ef1de8)
    
    if (data_143ef1de8 == 0xffffffff)
        atexit(sub_142ce9070)
        _Init_thread_footer(&data_143ef1de8)

int32_t rax_4 = data_143ef1da8:0xc.d
data_143ef1da8:8.d = 0

if (rax_4 s< 0 && rax_4 != 0)
    sub_1405c5570(&data_143ef1da8, 0)

int32_t rax_5 = data_143ef1dcc
data_143ef1dc8 = 0

if (rax_5 s< 0 && rax_5 != 0)
    sub_1405c5570(&data_143ef1dc0, 0)

uint32_t rbp = zx.d(arg3:7.b)
int64_t* rdi_4 = (zx.q(rbp) << 4) + r12
int64_t rsi = sx.q(rdi_4[1].d)
int32_t rax_7 = (rsi + 1).d
rdi_4[1].d = rax_7

if (rax_7 s> *(rdi_4 + 0xc))
    sub_1405a4d70(rdi_4)

*(*rdi_4 + (rsi << 3)) = arg3
int64_t rdi_5 = sx.q(data_143ef1dc8)
int32_t rax_9 = (rdi_5 + 1).d
bool cond:3 = rax_9 s<= data_143ef1dcc
data_143ef1dc8 = rax_9

if (not(cond:3))
    sub_1405a4d70(&data_143ef1dc0)

uint32_t i_1 = zx.d(rbp.b)
uint32_t i_2 = i_1
uint32_t i = i_1
*(data_143ef1dc0 + (rdi_5 << 3)) = arg3
int32_t r15 = *(arg1 + 0x68)

if (rbp.b != 0)
    do
        i -= 1
        uint64_t rax_11 = sub_141505c20(arg1, 0, r15, zx.d(i.b) << 0x18 | arg3.d, 
            0xffffffff << (i_1.b * (*(arg1 + 4)).b))
        
        if (rax_11 != 0)
            int32_t rsi_1 = rax_11.d
            uint32_t rdi_7 = (rax_11 u>> 0x20).d
            int128_t zmm0 = data_143ef1dc0.o
            data_143ef1dc0.o = data_143ef1da8
            data_143ef1da8 = zmm0
            bool cond:4_1 = data_143ef1dcc s>= 0
            data_143ef1dc8 = 0
            
            if (not(cond:4_1))
                sub_1405c5570(&data_143ef1dc0, 0)
            
            int32_t j_1 = data_143ef1de0
            int32_t r14_1 = 1
            int32_t r15_1 = rsi_1
            int32_t var_68_1 = 1
            int64_t rbx_2 = *data_143ef1da8.q
            uint8_t rsi_2 = rbx_2:7.b
            
            if (rsi_1 u< rdi_7)
                int32_t rbp_1 = rbx_2.d
                int64_t* r12_1 = 8
                
                do
                    int32_t r8_2 = *(*(arg1 + 0x60) + (sx.q(r15_1) << 2)) & 0xffffff
                    
                    if (rbp_1 u<= r8_2)
                        char r9_3 = (*(arg1 + 4)).b
                        
                        if ((1 << (rsi_2 * r9_3)) + rbp_1 u<= r8_2)
                            int64_t rdi_8 = sx.q(data_143ef1dc8)
                            int32_t rax_13 = (rdi_8 + 1).d
                            bool cond:8_1 = rax_13 s<= data_143ef1dcc
                            data_143ef1dc8 = rax_13
                            
                            if (not(cond:8_1))
                                sub_1405a4d70(&data_143ef1dc0)
                            
                            *(data_143ef1dc0 + (rdi_8 << 3)) = rbx_2
                            j_1 = data_143ef1de0
                            goto label_1415066d3
                        
                        if (rbp_1 != r8_2 || rsi_2 != i.b)
                            rsi_2 = (rbx_2 u>> 0x38).b - 1
                            int32_t rbx_5 = 1 << r9_3
                            int64_t arg_18
                            arg_18:7.b = rsi_2
                            int32_t j_2 = rbx_5 - 1
                            
                            if (rbx_5 != 1)
                                int16_t var_5c_1 = arg_18:4.w
                                char var_5a_1 = arg_18:6.b
                                uint8_t var_59_1 = rsi_2
                                int32_t j
                                
                                do
                                    int32_t rax_25 = (j_2 << (*(arg1 + 4) * rsi_2)) + rbp_1
                                    bool cond:10_1 = j_1 + 1 s<= data_143ef1de4
                                    data_143ef1de0 = j_1 + 1
                                    
                                    if (not(cond:10_1))
                                        sub_1405a4d70(&data_143ef1dd8)
                                    
                                    *(data_143ef1dd8 + (sx.q(j_1) << 3)) = rax_25.q
                                    j_1 = data_143ef1de0
                                    j = j_2
                                    j_2 -= 1
                                while (j != 1)
                                r14_1 = var_68_1
                            
                            rbx_2 = arg_18
                        else
                            r15_1 += 1
                        label_1415066d3:
                            
                            if (j_1 == 0)
                                if (r14_1 s>= data_143ef1da8:8.d)
                                    goto label_1415068ff
                                
                                r14_1 += 1
                                var_68_1 = r14_1
                                rbx_2 = *(r12_1 + data_143ef1da8.q)
                                r12_1 = &r12_1[1]
                                rsi_2 = rbx_2:7.b
                                rbp_1 = rbx_2.d
                            else
                                int64_t r9_4 = data_143ef1dd8
                                rbx_2 = *(r9_4 + (sx.q(j_1 - 1) << 3))
                                
                                if (0 != 0)
                                    memmove(r9_4 + (sx.q(j_1 - 1) << 3), r9_4 + (sx.q(j_1) << 3), 
                                        0 << 3)
                                    j_1 = data_143ef1de0
                                
                                j_1 -= 1
                                rsi_2 = rbx_2:7.b
                                rbp_1 = rbx_2.d
                                data_143ef1de0 = j_1
                    else
                        r15_1 += 1
                while (r15_1 u< rdi_7)
            
            if (rsi_2 != 0xff)
                int64_t rdi_9 = sx.q(data_143ef1dc8)
                int32_t rax_28 = (rdi_9 + 1).d
                bool cond:6_1 = rax_28 s<= data_143ef1dcc
                data_143ef1dc8 = rax_28
                
                if (not(cond:6_1))
                    sub_1405a4d70(&data_143ef1dc0)
                
                *(data_143ef1dc0 + (rdi_9 << 3)) = rbx_2
                j_1 = data_143ef1de0
            
            for (; j_1 != 0; j_1 = data_143ef1de0)
                int64_t r9_5 = data_143ef1dd8
                int64_t rbx_7 = *(r9_5 + (sx.q(j_1 - 1) << 3))
                
                if (0 != 0)
                    memmove(r9_5 + (sx.q(j_1 - 1) << 3), r9_5 + (sx.q(j_1) << 3), 0 << 3)
                    j_1 = data_143ef1de0
                
                data_143ef1de0 = j_1 - 1
                int64_t rdi_11 = sx.q(data_143ef1dc8)
                int32_t rax_35 = (rdi_11 + 1).d
                bool cond:9_1 = rax_35 s<= data_143ef1dcc
                data_143ef1dc8 = rax_35
                
                if (not(cond:9_1))
                    sub_1405a4d70(&data_143ef1dc0)
                
                *(data_143ef1dc0 + (rdi_11 << 3)) = rbx_7
            
        label_1415068ff:
            int64_t rdi_12 = sx.q(data_143ef1dc8)
            int64_t rsi_4 = data_143ef1da8.q
            int32_t rbx_9 = data_143ef1da8:8.d - r14_1
            int32_t rax_37 = rdi_12.d + rbx_9
            bool cond:7_1 = rax_37 s<= data_143ef1dcc
            data_143ef1dc8 = rax_37
            
            if (not(cond:7_1))
                sub_1405a4d70(&data_143ef1dc0)
            
            memcpy(data_143ef1dc0 + (rdi_12 << 3), rsi_4 + (sx.q(r14_1) << 3), rbx_9 << 3)
            r15 = rax_11.d
            r12 = arg4
        
        int64_t rdi_13 = sx.q(data_143ef1dc8)
        
        if (rdi_13.d == 0)
            break
        
        uint64_t* rbx_12 = (zx.q(i) << 4) + r12
        int32_t rax_40 = rbx_12[1].d
        int32_t rdx_14 = rdi_13.d + rax_40
        
        if (rdx_14 s> *(rbx_12 + 0xc))
            sub_1405c5570(rbx_12, rdx_14)
            rax_40 = rbx_12[1].d
        
        memcpy(*rbx_12 + (sx.q(rax_40) << 3), data_143ef1dc0, (rdi_13 << 3).d)
        rbx_12[1].d += rdi_13.d
        i_1 = i_2
    while (i != 0)

return sub_14150e9d0(arg1) __tailcall
