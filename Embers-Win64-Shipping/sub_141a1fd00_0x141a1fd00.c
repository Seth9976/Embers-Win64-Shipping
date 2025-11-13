// 函数: sub_141a1fd00
// 地址: 0x141a1fd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b33630("Landscape")
void* rax_1 = (*(*arg1 + 0x150))(arg1)
TEB* gsbase

if (data_143f29338 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f29338)
    
    if (data_143f29338 == 0xffffffff)
        atexit(sub_142cf4a50)
        _Init_thread_footer(&data_143f29338)

int64_t rbx = 0
void* rdi = nullptr

if (data_1439cc148 != 0)
    sub_141f88540()
    int64_t i_2 = sx.q(data_143f3c520)
    
    if (i_2.d != 0)
        bool cond:1_1 = i_2.d s<= data_143f29334
        data_143f29330 = 0
        
        if (not(cond:1_1))
            sub_140638cc0(&data_143f29328, i_2.d)
        
        int64_t i_1 = i_2
        
        if (i_2.d s> 0)
            int64_t r14_2 = 0
            int64_t i
            
            do
                sub_141f88540()
                int64_t rdi_1 = sx.q(data_143f29330)
                int64_t* rbp_2 = data_143f3c518
                int32_t rax_2 = (rdi_1 + 1).d
                bool cond:2_1 = rax_2 s<= data_143f29334
                data_143f29330 = rax_2
                
                if (not(cond:2_1))
                    sub_140638a00(&data_143f29328)
                
                int64_t rax_3 = data_143f29328
                int64_t rcx_2 = rdi_1 * 3
                *(rax_3 + (rcx_2 << 2)) = *(rbp_2 + r14_2)
                int32_t rax_4 = *(rbp_2 + r14_2 + 8)
                r14_2 += 0x28
                *(rax_3 + (rcx_2 << 2) + 8) = rax_4
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        rdi = &data_143f29328
else if (data_143f29330 != 0 || *(rax_1 + 0x110) != 0)
    rdi = &data_143f29328
    
    if (*(rax_1 + 0x110) != 0)
        rdi = rax_1 + 0x108
        
        if (&data_143f29328 != rdi)
            int64_t rbp_1 = sx.q(*(rdi + 8))
            int64_t r14_1 = *rdi
            int32_t r8_2 = data_143f29334
            data_143f29330 = rbp_1.d
            
            if (rbp_1.d != 0 || r8_2 != 0)
                sub_1407c3650(&data_143f29328, rbp_1.d, r8_2)
                memcpy(data_143f29328, r14_1, (rbp_1 * 0xc).d)
            else
                data_143f29334 = 0

int64_t** rsi = arg1[0x11]
int64_t r14_3 = sx.q(arg1[0x12].d) << 3
int32_t arg_8 = 0
uint64_t r14_4 = r14_3 u>> 3

if (rsi u> &rsi[arg1[0x12]])
    r14_4 = 0

if (r14_4 != 0)
    do
        int64_t* rcx_3 = *rsi
        
        if (rdi != 0 && *(rcx_3 + 0x384) != 0)
            int32_t r8_6 = data_1439cbf58
            
            if (r8_6 s<= 1 || modu.dp.d(0:(rcx_3[0x70].d + data_14399fa50), r8_6) == 0)
                sub_141a16c50(rcx_3, rdi, &arg_8)
        
        rsi = &rsi[1]
        rbx += 1
    while (rbx != r14_4)

return sub_140b37f60("Landscape")
