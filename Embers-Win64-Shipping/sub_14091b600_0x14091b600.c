// 函数: sub_14091b600
// 地址: 0x14091b600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e205a0
arg1[0x22].d = 0
int64_t rcx = arg1[0x21]

if (rcx != 0)
    sub_140a74f90(rcx)

int32_t result = sub_140681eb0(&arg1[0x19])
int64_t rcx_2 = arg1[0x14]

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t* rsi = arg1[0x11]

if (rsi != 0)
    result = rsi[1].d
    rsi[1].d -= 1
    
    if (result == 1)
        (**rsi)(rsi)
        result = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (result == 1)
            result = (*(*rsi + 8))(rsi, 1)

int64_t* rsi_1 = arg1[0xd]

if (rsi_1 != 0)
    result = rsi_1[1].d
    rsi_1[1].d -= 1
    
    if (result == 1)
        (**rsi_1)(rsi_1)
        result = *(rsi_1 + 0xc)
        *(rsi_1 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*rsi_1 + 8))(rsi_1, 1)

int64_t* rsi_2 = arg1[0xa]

if (rsi_2 != 0)
    result = rsi_2[1].d
    rsi_2[1].d -= 1
    
    if (result == 1)
        (**rsi_2)(rsi_2)
        result = *(rsi_2 + 0xc)
        *(rsi_2 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*rsi_2 + 8))(rsi_2, 1)

int64_t* rsi_3 = arg1[7]

if (rsi_3 != 0)
    result = rsi_3[1].d
    rsi_3[1].d -= 1
    
    if (result == 1)
        (**rsi_3)(rsi_3)
        result = *(rsi_3 + 0xc)
        *(rsi_3 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*rsi_3 + 8))(rsi_3, 1)

int64_t* rsi_4 = arg1[4]

if (rsi_4 != 0)
    result = rsi_4[1].d
    rsi_4[1].d -= 1
    
    if (result == 1)
        result = (**rsi_4)(rsi_4)
        int32_t rbx_1 = *(rsi_4 + 0xc)
        *(rsi_4 + 0xc) -= 1
        
        if (rbx_1 == 1)
            result = (*(*rsi_4 + 8))(rsi_4, zx.q(rbx_1))

int64_t rcx_13 = arg1[1]

if (rcx_13 == 0)
    return result

return sub_140a74f90(rcx_13)
