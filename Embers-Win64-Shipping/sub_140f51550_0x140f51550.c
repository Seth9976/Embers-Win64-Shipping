// 函数: sub_140f51550
// 地址: 0x140f51550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg4 + 0x18)
int64_t* rcx = *(arg4 + 0x28)
void* rbx = arg4
int64_t r10 = *(arg4 + 0x20)
int64_t r14 = arg3
int64_t var_38 = rax
int64_t var_30 = r10

if (rcx != 0)
    rcx[1].d += 1
    rax = var_38

char rcx_1 = (*(arg4 + 8)).b

if ((rcx_1 & 0xc0) == 0 || rax == data_143e1e8c0 || rax == data_143e1e8d8)
    r10.b = 0
else
    r10.b = 1

if ((rcx_1 & 3) == 0 || rax == data_143e1e830 || rax == data_143e1e848)
    arg4.b = 0
else
    arg4.b = 1

if ((rcx_1 & 0x30) == 0 || rax == data_143e1e890 || rax == data_143e1e8a8)
    arg3.b = 0
else
    arg3.b = 1

if ((rcx_1 & 0xc) == 0 || rax == data_143e1e860 || rax == data_143e1e878)
    rax.b = 0
else
    rax.b = 1

char rdx = rax.b
char rcx_2 = rdx | 2

if (arg3.b == 0)
    rcx_2 = rdx

char rcx_3 = rcx_2 | 4

if (arg4.b == 0)
    rcx_3 = rcx_2

char rsi = rcx_3 | 8

if (r10.b == 0)
    rsi = rcx_3

if (*(arg1 + 0x390) == 0)
label_140f5179f:
    int64_t* rcx_14 = *(arg1 + 0x460)
    
    if (rcx_14 == 0)
        sub_140a0e2a0(arg1, arg2)
    else
        (*(*rcx_14 + 0x48))(rcx_14, arg2, r14, rbx)
else
    char rax_4
    
    if (*(arg1 + 0x429) == 0)
        rax_4 = sub_140d6de70(&var_38)
    
    char rax_5
    
    if (*(arg1 + 0x429) != 0 || rax_4 == 0)
        rax_5 = sub_140d6dea0(&var_38)
    
    if ((*(arg1 + 0x429) != 0 || rax_4 == 0) && (rax_5 == 0 || rsi == 0))
        sub_140f5fbb0(arg1, 0)
        int64_t* rbx_1 = *(rbx + 0x28)
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        int64_t rax_6 = var_38
        int64_t* i
        
        if (*(rbx + 0x18) == data_143e1f028)
        label_140f516f7:
            r14.b = 1
        else if (*(arg1 + 0x42a) == 0)
            r14.b = 0
        else if (rax_6 == data_143e1e0f8)
        label_140f516f7_1:
            r14.b = 1
        else
            for (i = *(arg1 + 0x430); i != &i[sx.q(*(arg1 + 0x438)) * 3]; i = &i[3])
                if (*i == rax_6)
                    goto label_140f516f7_1
            
            r14.b = 0
        
        void* rcx_7
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                rcx_7, i = (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    rcx_7, i = (*(*rbx_1 + 8))(rbx_1, 1)
            
            rax_6 = var_38
        
        if (r14.b == 0)
            int64_t var_20 = rax_6
            int64_t var_18_1 = var_30
            int64_t* var_10_1 = rcx
            
            if (rcx != 0)
                rcx[1].d += 1
            
            rcx_7.b = rsi == 8
            int64_t* rax_10
            rax_10.b = rsi == 2
            i.b = rsi == 4
            sub_140f5cdb0(arg1, &var_20, i.b, rsi == 1, rax_10.b, rcx_7.b)
            sub_140e194c0(arg2)
        else
            sub_140e194c0(arg2)
    else
        if (*(arg1 + 0x390) == 0)
            goto label_140f5179f
        
        sub_140a0e2a0(arg1, arg2)

if (rcx != 0)
    rcx[1].d -= 1
    
    if (rcx[1].d == 1)
        (**rcx)(rcx)
        int32_t temp1_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rcx + 8))(rcx, 1)

return arg2
