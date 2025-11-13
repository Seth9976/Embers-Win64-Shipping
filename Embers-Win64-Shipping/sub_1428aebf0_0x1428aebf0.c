// 函数: sub_1428aebf0
// 地址: 0x1428aebf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t result = arg1[0x29].d

if (result != 0)
    return result

sub_1428a5c40(arg1[0x28])

if ((arg1[0x1a].d & 0x100) != 0)
    sub_1428a5d00(arg1[0x28])
    return 1

sub_1428a2300(arg1, &data_1434e9110, &arg1[0x24], nullptr)

if (sub_1428a3b50(arg1) == 0)
    arg1[0x1a].d |= 0x40

int32_t* rax_1 = sub_1428ac7d0(arg1, 0x57, nullptr, nullptr)
int32_t rsi_1 = -1

if (rax_1 != 0)
    int32_t rcx_5 = arg1[0x1a].d
    
    if (*rax_1 != 0)
        rcx_5 |= 0x10
        arg1[0x1a].d = rcx_5
    
    int32_t* rax_2 = *(rax_1 + 8)
    int32_t rax_3
    
    if (rax_2 == 0)
        rax_3 = -1
    else if (rax_2[1] == 0x102 || *rax_1 == 0)
        rax_3 = 0
        arg1[0x1a].d = rcx_5 | 0x80
    else
        rax_3 = sub_1428e4860(rax_2)
    
    arg1[0x19].d = rax_3
    sub_1428f87c0(rax_1)
    arg1[0x1a].d |= 1

int64_t* rax_4 = sub_1428ac7d0(arg1, 0x297, nullptr, nullptr)

if (rax_4 != 0)
    if ((arg1[0x1a].b & 0x10) != 0)
        arg1[0x1a].d |= 0x80
    else if (sub_1428ac790(arg1, 0x55, 0xffffffff) s>= 0)
        arg1[0x1a].d |= 0x80
    else if (sub_1428ac790(arg1, 0x56, 0xffffffff) s>= 0)
        arg1[0x1a].d |= 0x80
    
    int32_t* rcx_12 = *rax_4
    
    if (rcx_12 != 0)
        rsi_1 = sub_1428e4860(rcx_12)
    
    *(arg1 + 0xcc) = rsi_1
    sub_1428f8570(rax_4)
    arg1[0x1a].d |= 0x400

int32_t* rax_8 = sub_1428ac7d0(arg1, 0x53, nullptr, nullptr)

if (rax_8 != 0)
    if (*rax_8 s<= 0)
        *(arg1 + 0xd4) = 0
    else
        uint32_t r8_2 = zx.d(**(rax_8 + 8))
        *(arg1 + 0xd4) = r8_2
        
        if (*rax_8 s> 1)
            *(arg1 + 0xd4) = zx.d(*(*(rax_8 + 8) + 1)) << 8 | r8_2
    
    arg1[0x1a].d |= 2
    sub_1428c3460(rax_8)

arg1[0x1b].d = 0
int32_t* rax_10 = sub_1428ac7d0(arg1, 0x7e, nullptr, nullptr)
int32_t arg_8

if (rax_10 != 0)
    arg1[0x1a].d |= 4
    arg_8 = 0
    int32_t rax_11 = sub_142898c70(rax_10)
    int32_t rcx_22 = arg_8
    
    if (rcx_22 s< rax_11)
        int32_t rax_16
        
        do
            int32_t rax_13 = sub_1428a96d0(sub_142898ea0(rax_10, rcx_22))
            
            if (rax_13 s> 0xb4)
                if (rax_13 == 0x129)
                    arg1[0x1b].d |= 0x80
                else if (rax_13 == 0x38e)
                    arg1[0x1b].d |= 0x100
            else if (rax_13 == 0xb4)
                arg1[0x1b].d |= 0x20
            else if (rax_13 - 0x81 u<= 0xa)
                switch (rax_13)
                    case 0x81
                        arg1[0x1b].d |= 1
                    case 0x82
                        arg1[0x1b].d |= 2
                    case 0x83
                        arg1[0x1b].d |= 8
                    case 0x84
                        arg1[0x1b].d |= 4
                    case 0x85
                        arg1[0x1b].d |= 0x40
                    case 0x89, 0x8b
                        arg1[0x1b].d |= 0x10
            
            arg_8 += 1
            rax_16 = sub_142898c70(rax_10)
            rcx_22 = arg_8
        while (rcx_22 s< rax_16)
    
    sub_142898cb0(rax_10, sub_1428cd400)

int32_t* rax_17 = sub_1428ac7d0(arg1, 0x47, nullptr, nullptr)

if (rax_17 != 0)
    uint32_t rdx_3
    
    if (*rax_17 s<= 0)
        rdx_3 = 0
    else
        rdx_3 = zx.d(**(rax_17 + 8))
    
    *(arg1 + 0xdc) = rdx_3
    arg1[0x1a].d |= 8
    sub_1428c3460(rax_17)

arg1[0x1c] = sub_1428ac7d0(arg1, 0x52, nullptr, nullptr)
arg1[0x1d] = sub_1428ac7d0(arg1, 0x5a, nullptr, nullptr)
void* rax_20 = sub_1428a38f0(arg1)

if (sub_1428a32a0(sub_1428a3930(arg1), rax_20) == 0)
    arg1[0x1a].d |= 0x20
    
    if (sub_1428ae660(arg1, arg1[0x1d]) == 0)
        int32_t rax_24 = arg1[0x1a].d
        
        if ((rax_24.b & 2) == 0 || (*(arg1 + 0xd4) & 4) != 0)
            arg1[0x1a].d = rax_24 | 0x2000

arg1[0x20] = sub_1428ac7d0(arg1, 0x55, nullptr, nullptr)
int64_t rax_27 = sub_1428ac7d0(arg1, 0x29a, &arg_8, nullptr)
arg1[0x21] = rax_27

if (rax_27 == 0 && arg_8 != 0xffffffff)
    arg1[0x1a].d |= 0x80

int32_t* rax_28 = sub_1428ac7d0(arg1, 0x67, nullptr, nullptr)
arg1[0x1f] = rax_28
int32_t rbp_1 = 0

if (sub_142898c70(rax_28) s> 0)
    int32_t rax_38
    
    do
        int64_t* rax_30 = sub_142898ea0(arg1[0x1f], rbp_1)
        int32_t* rax_31 = rax_30[1]
        int32_t rdx_8
        
        if (rax_31 == 0)
            rdx_8 = 0x807f
        else
            int32_t rcx_43 = *rax_31
            uint32_t rdx_7
            
            if (rcx_43 s<= 0)
                rdx_7 = rax_30[3].d
            else
                rdx_7 = zx.d(**(rax_31 + 8))
                rax_30[3].d = rdx_7
                rcx_43 = *rax_31
            
            if (rcx_43 s> 1)
                rdx_7 |= zx.d(*(*(rax_31 + 8) + 1)) << 8
            
            rdx_8 = rdx_7 & 0x807f
        
        rax_30[3].d = rdx_8
        int32_t* rax_33 = *rax_30
        
        if (rax_33 != 0 && *rax_33 == 1)
            int32_t rdi_5 = 0
            int32_t rax_34 = sub_142898c70(rax_30[2])
            int64_t rax_37
            
            if (rax_34 s> 0)
                int32_t* rax_35
                
                while (true)
                    rax_35 = sub_142898ea0(rax_30[2], rdi_5)
                    
                    if (*rax_35 == 4)
                        break
                    
                    rdi_5 += 1
                    
                    if (rdi_5 s>= sub_142898c70(rax_30[2]))
                        goto label_1428af0bd
                
                rax_37 = *(rax_35 + 8)
            
            if (rax_34 s<= 0 || rax_37 == 0)
            label_1428af0bd:
                rax_37 = sub_1428a38f0(arg1)
            
            sub_1428f1d70(*rax_30, rax_37)
        
        rbp_1 += 1
        rax_38 = sub_142898c70(arg1[0x1f])
    while (rbp_1 s< rax_38)

arg1[0x22] = sub_1428ac7d0(arg1, 0x122, nullptr, nullptr)
arg1[0x23] = sub_1428ac7d0(arg1, 0x123, nullptr, nullptr)
arg_8 = 0
int32_t rax_41 = sub_1428ac7b0(arg1)
int32_t rcx_56 = arg_8

if (rcx_56 s< rax_41)
    int32_t rax_49
    
    do
        int64_t* rax_42 = sub_1428ac770(arg1, rcx_56)
        
        if (sub_1428a96d0(sub_142891580(rax_42)) == 0x359)
            arg1[0x1a].d |= 0x1000
        
        if (sub_1428e74c0(rax_42) != 0)
            int32_t rax_47 = sub_1428a96d0(sub_142891580(rax_42))
            int32_t arg_10 = rax_47
            int64_t rax_48
            
            if (rax_47 != 0)
                rax_48 = sub_1428a8f00(&arg_10, U"GSUWYg~", 0xe, 4, sub_1428aeb70)
            
            if (rax_47 == 0 || rax_48 == 0)
                arg1[0x1a].d |= 0x200
                break
        
        arg_8 += 1
        rax_49 = sub_1428ac7b0(arg1)
        rcx_56 = arg_8
    while (rcx_56 s< rax_49)

sub_1428a3bc0(arg1)
arg1[0x1a].d |= 0x100
arg1[0x29].d = 1
return sub_1428a5d00(arg1[0x28])
