// 函数: sub_14190a590
// 地址: 0x14190a590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f0f19c != 0)
    sub_14194df40()
    data_143f0f19c = 0
    
    if (*(arg1 + 0x15cdc) != 0)
        int64_t i_7 = 4
        void* rbx_1 = arg1 + 0x15c68
        int64_t i
        
        do
            rbx_1 += 0x18
            i = i_7
            i_7 -= 1
        while (i != 1)
        sub_14194b500(arg1 + 0x15c28)
        *(arg1 + 0x15cd8) = 0
        *(arg1 + 0x15cdc) = 0
    
    sub_1419a2e50()
    data_143f10908 += 1
    int32_t i_1 = 0
    
    if (data_143f1afd0 s> 0)
        int64_t* rdi_1 = nullptr
        
        do
            int64_t* rcx_3 = *(rdi_1 + data_143f1afc8)
            
            if (rcx_3 != 0)
                (*(*rcx_3 + 0x20))(rcx_3)
            
            i_1 += 1
            rdi_1 = &rdi_1[1]
        while (i_1 s< data_143f1afd0)
    
    data_143f10908 -= 1
    sub_1419a2e50()
    data_143f10908 += 1
    int32_t i_2 = 0
    
    if (data_143f1afd0 s> 0)
        int64_t* rdi_2 = nullptr
        
        do
            int64_t* rcx_5 = *(rdi_2 + data_143f1afc8)
            
            if (rcx_5 != 0)
                (*(*rcx_5 + 0x10))(rcx_5)
            
            i_2 += 1
            rdi_2 = &rdi_2[1]
        while (i_2 s< data_143f1afd0)
    
    data_143f10908 -= 1

int64_t i_9 = 2
void* rdi_3 = arg1 + 0x858
int64_t i_6 = 2
int64_t i_3

do
    int64_t* rbx_2 = *rdi_3
    *rdi_3 = 0
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            char rax_4
            
            if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
                rax_4 = sub_1405949a0()
            
            if (rbx_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_4 != 0))
                (**rbx_2)(rbx_2, 1)
            else
                bool z_1
                
                if (0 == *(rbx_2 + 0xc))
                    *(rbx_2 + 0xc) = 1
                    z_1 = true
                else
                    *(rbx_2 + 0xc)
                    z_1 = false
                
                if (z_1)
                    sub_1405dcc10(&data_143f02390, rbx_2)
    
    rdi_3 += 8
    i_3 = i_6
    i_6 -= 1
while (i_3 != 1)
void* rdi_4 = arg1 + 0x880
int64_t i_4

do
    int64_t* rbx_3 = *rdi_4
    *rdi_4 = 0
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            char rax_8
            
            if (rbx_3[2].b == 0 && data_143f0f1d0 == 0)
                rax_8 = sub_1405949a0()
            
            if (rbx_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_8 != 0))
                (**rbx_3)(rbx_3, 1)
            else
                bool z_2
                
                if (0 == *(rbx_3 + 0xc))
                    *(rbx_3 + 0xc) = 1
                    z_2 = true
                else
                    *(rbx_3 + 0xc)
                    z_2 = false
                
                if (z_2)
                    sub_1405dcc10(&data_143f02390, rbx_3)
    
    rdi_4 += 8
    i_4 = i_9
    i_9 -= 1
while (i_4 != 1)
int32_t i_8 = data_143efed98

if (i_8 != 0)
    int64_t* rbx_5 = data_143efed90 + 8
    int32_t i_5
    
    do
        sub_14081c9d0(rbx_5)
        rbx_5 = &rbx_5[2]
        i_5 = i_8
        i_8 -= 1
    while (i_5 != 1)

bool cond:0 = data_143efed9c == 0
data_143efed98 = 0

if (not(cond:0))
    sub_1405a5410(&data_143efed90, 0)

int64_t* rbx_6 = *(arg1 + 0x8a0)
*(arg1 + 0x8a0) = 0

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        char rax_12
        
        if (rbx_6[2].b == 0 && data_143f0f1d0 == 0)
            rax_12 = sub_1405949a0()
        
        if (rbx_6[2].b != 0 || (data_143f0f1d0 == 0 && rax_12 != 0))
            (**rbx_6)(rbx_6, 1)
        else
            bool z_3
            
            if (0 == *(rbx_6 + 0xc))
                *(rbx_6 + 0xc) = 1
                z_3 = true
            else
                *(rbx_6 + 0xc)
                z_3 = false
            
            if (z_3)
                sub_1405dcc10(&data_143f02390, rbx_6)

sub_1419399d0()

if (*(arg1 + 0x300) != 0)
    data_143effce8(1, arg1 + 0x300)
    *(arg1 + 0x300) = 0

int64_t* rbx_7 = *(arg1 + 0x570)
*(arg1 + 0x570) = 0

if (rbx_7 != 0)
    rbx_7[1].d -= 1
    
    if (rbx_7[1].d == 1)
        char rax_15
        
        if (rbx_7[2].b == 0 && data_143f0f1d0 == 0)
            rax_15 = sub_1405949a0()
        
        if (rbx_7[2].b != 0 || (data_143f0f1d0 == 0 && rax_15 != 0))
            (**rbx_7)(rbx_7, 1)
        else
            bool z_4
            
            if (0 == *(rbx_7 + 0xc))
                *(rbx_7 + 0xc) = 1
                z_4 = true
            else
                *(rbx_7 + 0xc)
                z_4 = false
            
            if (z_4)
                sub_1405dcc10(&data_143f02390, rbx_7)

(*(*(arg1 + 0x148) + 0x10))(arg1 + 0x148)
(*(*(arg1 + 0x14a20) + 0x10))(arg1 + 0x14a20)
jump(*(*(arg1 + 0x152b8) + 0x10))
