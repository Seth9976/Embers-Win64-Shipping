// 函数: sub_140982180
// 地址: 0x140982180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x21].d = 0
int64_t rcx = arg1[0x20]

if (rcx != 0)
    sub_140a74f90(rcx)

int32_t result = sub_1405e1b50(&arg1[0x18], 0)
int64_t rcx_2 = arg1[0x1c]

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0x18]

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[0x13]

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t* rsi = arg1[0x10]

if (rsi != 0)
    result = rsi[1].d
    rsi[1].d -= 1
    
    if (result == 1)
        (**rsi)(rsi)
        result = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (result == 1)
            result = (*(*rsi + 8))(rsi, 1)

int64_t* rsi_1 = arg1[0xc]

if (rsi_1 != 0)
    result = rsi_1[1].d
    rsi_1[1].d -= 1
    
    if (result == 1)
        (**rsi_1)(rsi_1)
        result = *(rsi_1 + 0xc)
        *(rsi_1 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*rsi_1 + 8))(rsi_1, 1)

int64_t* rsi_2 = arg1[9]

if (rsi_2 != 0)
    result = rsi_2[1].d
    rsi_2[1].d -= 1
    
    if (result == 1)
        (**rsi_2)(rsi_2)
        result = *(rsi_2 + 0xc)
        *(rsi_2 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*rsi_2 + 8))(rsi_2, 1)

int64_t* rsi_3 = arg1[6]

if (rsi_3 != 0)
    result = rsi_3[1].d
    rsi_3[1].d -= 1
    
    if (result == 1)
        (**rsi_3)(rsi_3)
        result = *(rsi_3 + 0xc)
        *(rsi_3 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*rsi_3 + 8))(rsi_3, 1)

int64_t* rsi_4 = arg1[3]

if (rsi_4 != 0)
    result = rsi_4[1].d
    rsi_4[1].d -= 1
    
    if (result == 1)
        result = (**rsi_4)(rsi_4)
        int32_t rbx_1 = *(rsi_4 + 0xc)
        *(rsi_4 + 0xc) -= 1
        
        if (rbx_1 == 1)
            result = (*(*rsi_4 + 8))(rsi_4, zx.q(rbx_1))

int64_t rcx_15 = *arg1

if (rcx_15 == 0)
    return result

return sub_140a74f90(rcx_15)
