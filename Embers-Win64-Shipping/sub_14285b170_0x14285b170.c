// 函数: sub_14285b170
// 地址: 0x14285b170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
data_143feaefc = 0
sub_142873060()
void* const rdi = &data_1434da090

for (int64_t i = 0; i u< 0xb0; )
    int32_t rcx_1 = *(rdi + 4)
    
    if (rcx_1 != 0)
        int64_t rax_2 = sub_14289b930(sub_1428a9620(rcx_1))
        *(i + 0x143feae40) = rax_2
        
        if (rax_2 == 0)
            data_143feaefc |= *rdi
    else
        *(i + 0x143feae40) = 0
    
    i += 8
    rdi += 8

data_143feafc0 = 0
void* const rdi_1 = &data_1434da140
int64_t rbx = 0

while (true)
    void* rax_5 = sub_14289b970(sub_1428a9620(*(rdi_1 + 4)))
    *(rbx + &data_143feaf00) = rax_5
    
    if (rax_5 != 0)
        int32_t rax_7 = sub_1428916c0(rax_5)
        
        if (rax_7 s< 0)
            break
        
        *(rbx + 0x143feaf60) = sx.q(rax_7)
    else
        data_143feafc0 |= *rdi_1
    
    rbx += 8
    rdi_1 += 8
    
    if (rbx u>= 0x60)
        if (data_143feaf00 == 0 || data_143feaf08 == 0)
            break
        
        data_143feafc4 = 0
        data_143feafc8 = 0
        void* const arg_10 = nullptr
        int32_t arg_8 = 0
        void* rax_9 = sub_1428bc250(&arg_10, "gost-mac", 0xffffffff)
        
        if (rax_9 != 0)
            int32_t rax_10 = sub_1428bc470(&arg_8, nullptr, nullptr, nullptr, nullptr, rax_9)
            int32_t rcx_8 = arg_8
            
            if (rax_10 s<= 0)
                rcx_8 = 0
            
            arg_8 = rcx_8
        
        sub_1428af710(arg_10)
        int32_t rax_11 = arg_8
        data_143b815d4 = rax_11
        
        if (rax_11 == 0)
            data_143feafc0 |= 8
        else
            data_143feaf78 = 0x20
        
        arg_10 = nullptr
        arg_8 = 0
        void* rax_12 = sub_1428bc250(&arg_10, "gost-mac-12", 0xffffffff)
        
        if (rax_12 != 0)
            int32_t rax_13 = sub_1428bc470(&arg_8, nullptr, nullptr, nullptr, nullptr, rax_12)
            int32_t rcx_12 = arg_8
            
            if (rax_13 s<= 0)
                rcx_12 = 0
            
            arg_8 = rcx_12
        
        sub_1428af710(arg_10)
        int32_t rax_14 = arg_8
        data_143b815e4 = rax_14
        
        if (rax_14 == 0)
            data_143feafc0 |= 0x100
        else
            data_143feaf98 = 0x20
        
        arg_10 = nullptr
        arg_8 = 0
        void* rax_15 = sub_1428bc250(&arg_10, "gost2001", 0xffffffff)
        
        if (rax_15 != 0)
            int32_t rax_16 = sub_1428bc470(&arg_8, nullptr, nullptr, nullptr, nullptr, rax_15)
            int32_t rcx_16 = arg_8
            
            if (rax_16 s<= 0)
                rcx_16 = 0
            
            arg_8 = rcx_16
        
        sub_1428af710(arg_10)
        
        if (arg_8 == 0)
            data_143feafc8 |= 0xa0
        
        arg_10 = nullptr
        arg_8 = 0
        void* rax_17 = sub_1428bc250(&arg_10, "gost2012_256", 0xffffffff)
        
        if (rax_17 != 0)
            int32_t rax_18 = sub_1428bc470(&arg_8, nullptr, nullptr, nullptr, nullptr, rax_17)
            int32_t rcx_20 = arg_8
            
            if (rax_18 s<= 0)
                rcx_20 = 0
            
            arg_8 = rcx_20
        
        sub_1428af710(arg_10)
        
        if (arg_8 == 0)
            data_143feafc8 |= 0x80
        
        arg_10 = nullptr
        arg_8 = 0
        void* rax_19 = sub_1428bc250(&arg_10, "gost2012_512", 0xffffffff)
        
        if (rax_19 != 0)
            int32_t rax_20 = sub_1428bc470(&arg_8, nullptr, nullptr, nullptr, nullptr, rax_19)
            int32_t rcx_24 = arg_8
            
            if (rax_20 s<= 0)
                rcx_24 = 0
            
            arg_8 = rcx_24
        
        sub_1428af710(arg_10)
        int32_t rax_21 = data_143feafc8
        
        if (arg_8 == 0)
            rax_21 |= 0x80
            data_143feafc8 = rax_21
        
        if ((rax_21.b & 0xa0) == 0xa0)
            data_143feafc4 |= 0x10
        
        return 1

return 0
